function [] = save_params_controller(this, savename, qM, Kc, Kc_inty, yRef)
  % [] = save_params_controller(this, savename, qM, Kc, Kc_inty, yRef)

  dt = this.dt;
  A = this.A;
  B = this.B;
  g = this.g;
  m = this.m;
  C = this.C;
  d = this.d;
  x0 = this.x0;

  % calculate the steady state Kalman gains.
  if isempty(this.K)
    this.calcK_steadyState();
  end
  Ke = this.K;
  Ke_m = this.calcKm_dual_steadyState(qM);

  if nargin<6
    % doesn't save reference to file
    save(savename, 'dt', 'A', 'B', 'g', 'm', 'C', 'd', 'x0', 'Ke', 'Ke_m', 'Kc', 'Kc_inty');
  else
    save(savename, 'dt', 'A', 'B', 'g', 'm', 'C', 'd', 'x0', 'Ke', 'Ke_m', 'Kc', 'Kc_inty', 'yRef');
  end
end
