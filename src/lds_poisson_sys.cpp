//===-- lds_poisson_sys.cpp - PLDS ----------------------------------------===//
//
// Copyright 2021 Georgia Institute of Technology
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
//===----------------------------------------------------------------------===//
///
/// \file
/// This file implements the type for state estimation (filtering) as well as
/// simulation of Poisson-output linear dynamical systems
/// (`lds::poisson::sys_t`). It inherits functionality from the underlying
/// linear dynamical system (`lds::sys_t`).
///
/// \brief PLDS base type
//===----------------------------------------------------------------------===//

#include <ldsCtrlEst>

lds::poisson::System::System(size_t n_u, size_t n_x, size_t n_y, data_t dt,
                             data_t p0, data_t q0)
    : lds::System(n_u, n_x, n_y, dt, p0, q0) {
  diag_y_ = diagmat(y_);
  chance_ = Vector(n_y, fill::randu);
};

// Correct: Given measurement (z) and current input (u), update estimate of the
// state, covar, output.
//
// see Eden et al. 2004
void lds::poisson::System::RecurseKe() {
  // predict covariance
  P_ = A_ * P_ * A_.t() + Q_;

  // update cov
  P_ = pinv(pinv(P_) + C_.t() * diag_y_ * C_);
  Ke_ = P_ * C_.t();
  if (do_adapt_m) {
    P_m_ += Q_m_;                                     // predict (A_m = I)
    P_m_ = pinv(pinv(P_m_) + C_.t() * diag_y_ * C_);  // update
    Ke_m_ = P_m_ * C_.t();
  }
}

// Measurement: z ~ Poisson(y)
// n.b., In reality, this is only Poisson where rate `y` and sample period `dt`
// are sufficiently small there is only ever 0 or 1 events in a period. If
// either of those is violated, results will be innacurate.
// Simulate
const lds::Vector& lds::poisson::System::Simulate(const Vector& u_tm1) {
  f(u_tm1, true);  // simulate dynamics with noise added
  h();             // output

  chance_.randu(n_y_);
  z_.zeros();
  for (std::size_t k = 0; k < n_y_; k++) {
    if ((y_[k]) > chance_[k]) {
      z_[k] = 1.0;
    }
  }
  return z_;
}
// ******************* SYS_T *******************
