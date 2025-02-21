---
title: lds::Controller

---

# lds::Controller



 [More...](#detailed-description)

Inherited by [lds::SwitchedController< System >](/lds-ctrl-est/docs/api/classes/classlds_1_1_switched_controller/), [lds::gaussian::Controller](/lds-ctrl-est/docs/api/classes/classlds_1_1gaussian_1_1_controller/), [lds::poisson::Controller](/lds-ctrl-est/docs/api/classes/classlds_1_1poisson_1_1_controller/)

## Public Functions

|                | Name           |
| -------------- | -------------- |
| | **[Controller](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-controller)**() =default<br>Constructs a new [Controller](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/).  |
| | **[Controller](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-controller)**(const [System](/lds-ctrl-est/docs/api/classes/classlds_1_1_system/) & sys, [data_t](/lds-ctrl-est/docs/api/namespaces/namespacelds/#using-data_t) u_lb, [data_t](/lds-ctrl-est/docs/api/namespaces/namespacelds/#using-data_t) u_ub, size_t control_type =0)<br>Constructs a new [Controller](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/).  |
| | **[Controller](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-controller)**([System](/lds-ctrl-est/docs/api/classes/classlds_1_1_system/) && sys, [data_t](/lds-ctrl-est/docs/api/namespaces/namespacelds/#using-data_t) u_lb, [data_t](/lds-ctrl-est/docs/api/namespaces/namespacelds/#using-data_t) u_ub, size_t control_type =0)<br>Constructs a new [Controller](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/) by moving the system object.  |
| const Vector & | **[Control](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-control)**(const Vector & z, bool do_control =true, bool do_lock_control =false, [data_t](/lds-ctrl-est/docs/api/namespaces/namespacelds/#using-data_t) sigma_soft_start =0, [data_t](/lds-ctrl-est/docs/api/namespaces/namespacelds/#using-data_t) sigma_u_noise =0, bool do_reset_at_control_onset =true)<br>updates control signal (single-step)  |
| const Vector & | **[ControlOutputReference](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-controloutputreference)**(const Vector & z, bool do_control =true, bool do_estimation =true, bool do_lock_control =false, [data_t](/lds-ctrl-est/docs/api/namespaces/namespacelds/#using-data_t) sigma_soft_start =0, [data_t](/lds-ctrl-est/docs/api/namespaces/namespacelds/#using-data_t) sigma_u_noise =0, bool do_reset_at_control_onset =true)<br>updates control signal, given previously-set (single-step)  |
| const [System](/lds-ctrl-est/docs/api/classes/classlds_1_1_system/) & | **[sys](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-sys)**() const |
| const Matrix & | **[Kc](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-kc)**() const<br>Get state feedback controller gain.  |
| const Matrix & | **[Kc_inty](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-kc_inty)**() const<br>Get integral controller gain.  |
| const Matrix & | **[Kc_u](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-kc_u)**() const<br>Get input feedback controller gain.  |
| const Vector & | **[g_design](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-g_design)**() const<br>Get input gain used in controller design.  |
| const Vector & | **[u_ref](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-u_ref)**() const<br>Get reference input.  |
| const Vector & | **[x_ref](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-x_ref)**() const<br>Get reference state.  |
| const Vector & | **[y_ref](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-y_ref)**() const<br>Get reference output.  |
| size_t | **[control_type](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-control_type)**() const<br>Get controller type.  |
| void | **[set_sys](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-set_sys)**(const [System](/lds-ctrl-est/docs/api/classes/classlds_1_1_system/) & sys)<br>Set system.  |
| void | **[set_g_design](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-set_g_design)**(const Vector & g_design)<br>Set input gain used in controller design (g_design)  |
| void | **[set_u_ref](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-set_u_ref)**(const Vector & u_ref)<br>Set reference input (u_ref)  |
| void | **[set_x_ref](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-set_x_ref)**(const Vector & x_ref)<br>Set reference state (x_ref)  |
| virtual void | **[set_y_ref](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-set_y_ref)**(const Vector & y_ref)<br>Set reference output (y_ref)  |
| void | **[set_Kc](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-set_kc)**(const Matrix & Kc)<br>Set state controller gain.  |
| void | **[set_Kc_inty](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-set_kc_inty)**(const Matrix & Kc_inty)<br>Set integral controller gain.  |
| void | **[set_Kc_u](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-set_kc_u)**(const Matrix & Kc_u)<br>Set input controller gain.  |
| void | **[set_tau_awu](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-set_tau_awu)**([data_t](/lds-ctrl-est/docs/api/namespaces/namespacelds/#using-data_t) tau)<br>Set time constant of anti-integral-windup.  |
| void | **[set_control_type](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-set_control_type)**(size_t control_type)<br>Sets the control type.  |
| void | **[Reset](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-reset)**()<br>reset system and control variables.  |
| void | **[Print](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#function-print)**()<br>prints variables to stdout  |

## Protected Attributes

|                | Name           |
| -------------- | -------------- |
| [System](/lds-ctrl-est/docs/api/classes/classlds_1_1_system/) | **[sys_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-sys_)** <br>underlying LDS  |
| Vector | **[u_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-u_)** <br>control signal  |
| Vector | **[g_design_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-g_design_)** <br>input gain of the system used for controller design  |
| Vector | **[u_ref_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-u_ref_)** <br>reference input  |
| Vector | **[u_ref_prev_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-u_ref_prev_)** <br>reference input at previous time step  |
| Vector | **[x_ref_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-x_ref_)** <br>reference state  |
| Vector | **[y_ref_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-y_ref_)** <br>reference output  |
| Vector | **[cx_ref_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-cx_ref_)**  |
| Matrix | **[Kc_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-kc_)** <br>state controller gain  |
| Matrix | **[Kc_u_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-kc_u_)** <br>input controller gain (optional when control updates \deltaU)  |
| Matrix | **[Kc_inty_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-kc_inty_)** <br>integral controller gain  |
| Vector | **[du_ref_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-du_ref_)**  |
| Vector | **[dv_ref_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-dv_ref_)**  |
| Vector | **[v_ref_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-v_ref_)**  |
| Vector | **[dv_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-dv_)**  |
| Vector | **[v_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-v_)** <br>Control after g inversion (e.g., control in physical units)  |
| Vector | **[int_e_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-int_e_)** <br>integrated error  |
| Vector | **[int_e_awu_adjust_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-int_e_awu_adjust_)** <br>anti-windup adjustment to intE  |
| Vector | **[u_sat_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-u_sat_)** <br>control signal after saturation (for antiWindup)  |
| bool | **[do_control_prev_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-do_control_prev_)**  |
| bool | **[do_lock_control_prev_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-do_lock_control_prev_)**  |
| bool | **[u_saturated_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-u_saturated_)** <br>whether control signal has reached saturation limits  |
| [data_t](/lds-ctrl-est/docs/api/namespaces/namespacelds/#using-data_t) | **[u_lb_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-u_lb_)** <br>lower bound on control  |
| [data_t](/lds-ctrl-est/docs/api/namespaces/namespacelds/#using-data_t) | **[u_ub_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-u_ub_)** <br>upper bound on control  |
| [data_t](/lds-ctrl-est/docs/api/namespaces/namespacelds/#using-data_t) | **[tau_awu_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-tau_awu_)** <br>antiwindup time constant  |
| [data_t](/lds-ctrl-est/docs/api/namespaces/namespacelds/#using-data_t) | **[k_awu_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-k_awu_)**  |
| [data_t](/lds-ctrl-est/docs/api/namespaces/namespacelds/#using-data_t) | **[t_since_control_onset_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-t_since_control_onset_)** <br>time since control epoch onset  |
| size_t | **[control_type_](/lds-ctrl-est/docs/api/classes/classlds_1_1_controller/#variable-control_type_)** <br>controller type  |

## Detailed Description

```cpp
template <typename System >
class lds::Controller;
```


---
---
## Public Function Details

### **Controller**

```cpp
Controller() =default
```



---
### **Controller**

```cpp
inline Controller(
    const System & sys,
    data_t u_lb,
    data_t u_ub,
    size_t control_type =0
)
```



**Parameters**:

  * **sys** [System](/lds-ctrl-est/docs/api/classes/classlds_1_1_system/) (derived from [lds::System](/lds-ctrl-est/docs/api/classes/classlds_1_1_system/)) 
  * **u_lb** lower bound on control (u) 
  * **u_ub** upper bound on control (u) 
  * **control_type** [optional] control type bit mask


**Template Parameters**:

  * **[System](/lds-ctrl-est/docs/api/classes/classlds_1_1_system/)** type derived from [lds::System](/lds-ctrl-est/docs/api/classes/classlds_1_1_system/)


---
### **Controller**

```cpp
inline Controller(
    System && sys,
    data_t u_lb,
    data_t u_ub,
    size_t control_type =0
)
```



**Parameters**:

  * **sys** [System](/lds-ctrl-est/docs/api/classes/classlds_1_1_system/) (derived from [lds::System](/lds-ctrl-est/docs/api/classes/classlds_1_1_system/)) 
  * **u_lb** lower bound on control (u) 
  * **u_ub** upper bound on control (u) 
  * **control_type** [optional] control type bit mask


**Template Parameters**:

  * **[System](/lds-ctrl-est/docs/api/classes/classlds_1_1_system/)** type derived from [lds::System](/lds-ctrl-est/docs/api/classes/classlds_1_1_system/)


---
### **Control**

```cpp
inline const Vector & Control(
    const Vector & z,
    bool do_control =true,
    bool do_lock_control =false,
    data_t sigma_soft_start =0,
    data_t sigma_u_noise =0,
    bool do_reset_at_control_onset =true
)
```



**Parameters**:

  * **z** measurement 
  * **do_control** [optional] whether to update control (true) or simply feed through u_ref (false) 
  * **do_lock_control** [optional] whether to lock control at its current value 
  * **sigma_soft_start** [optional] standard deviation (sigma) of a Gaussian soft-start to control (do_control from false to true) 
  * **sigma_u_noise** [optional] standard deviation (sigma) of Gaussian noise added on top of control signal 
  * **do_reset_at_control_onset** [optional] whether to reset controller at control epoch onset (i.e., do_control from false to true)


**Return**: updated control signal 

Updates the control signal (single-step). This is the most flexible option, but requires user to have set the controller's y_ref, x_ref, and u_ref variables.


---
### **ControlOutputReference**

```cpp
inline const Vector & ControlOutputReference(
    const Vector & z,
    bool do_control =true,
    bool do_estimation =true,
    bool do_lock_control =false,
    data_t sigma_soft_start =0,
    data_t sigma_u_noise =0,
    bool do_reset_at_control_onset =true
)
```



**Parameters**:

  * **z** measurement 
  * **do_control** [optional] whether to update control (true) or simply feed through u_ref (false) 
  * **do_estimation** [optional] whether to update state estimate (if false, effectively open-loop control) 
  * **do_lock_control** [optional] whether to lock control at its current value 
  * **sigma_soft_start** [optional] standard deviation (sigma) of a Gaussian soft-start to control (do_control from false to true) 
  * **sigma_u_noise** [optional] standard deviation (sigma) of Gaussian noise added on top of control signal 
  * **do_reset_at_control_onset** [optional] whether to reset controller at control epoch onset (i.e., do_control from false to true)


**Return**: updated control signal 

Updates the control signal (single-step), given previously-set y_ref. This method calculates the rest of the set point (u_ref, x_ref) that is required to for the system to be at y_ref at steady state. This is accomplished by linearly-constrained least-squares. For a single-output system, the solution should be exact within control saturation limits. For a multi-output system, it provides the least-squares comprimise across the outputs.


---
### **sys**

```cpp
inline const System & sys() const
```



---
### **Kc**

```cpp
inline const Matrix & Kc() const
```



---
### **Kc_inty**

```cpp
inline const Matrix & Kc_inty() const
```



---
### **Kc_u**

```cpp
inline const Matrix & Kc_u() const
```



---
### **g_design**

```cpp
inline const Vector & g_design() const
```



---
### **u_ref**

```cpp
inline const Vector & u_ref() const
```



---
### **x_ref**

```cpp
inline const Vector & x_ref() const
```



---
### **y_ref**

```cpp
inline const Vector & y_ref() const
```



---
### **control_type**

```cpp
inline size_t control_type() const
```



---
### **set_sys**

```cpp
inline void set_sys(
    const System & sys
)
```



---
### **set_g_design**

```cpp
inline void set_g_design(
    const Vector & g_design
)
```



---
### **set_u_ref**

```cpp
inline void set_u_ref(
    const Vector & u_ref
)
```



---
### **set_x_ref**

```cpp
inline void set_x_ref(
    const Vector & x_ref
)
```



---
### **set_y_ref**

```cpp
inline virtual void set_y_ref(
    const Vector & y_ref
)
```



**Reimplemented by**: [lds::gaussian::Controller::set_y_ref](/lds-ctrl-est/docs/api/classes/classlds_1_1gaussian_1_1_controller/#function-set_y_ref), [lds::gaussian::SwitchedController::set_y_ref](/lds-ctrl-est/docs/api/classes/classlds_1_1gaussian_1_1_switched_controller/#function-set_y_ref), [lds::poisson::Controller::set_y_ref](/lds-ctrl-est/docs/api/classes/classlds_1_1poisson_1_1_controller/#function-set_y_ref), [lds::poisson::SwitchedController::set_y_ref](/lds-ctrl-est/docs/api/classes/classlds_1_1poisson_1_1_switched_controller/#function-set_y_ref)


---
### **set_Kc**

```cpp
inline void set_Kc(
    const Matrix & Kc
)
```



---
### **set_Kc_inty**

```cpp
inline void set_Kc_inty(
    const Matrix & Kc_inty
)
```



---
### **set_Kc_u**

```cpp
inline void set_Kc_u(
    const Matrix & Kc_u
)
```



---
### **set_tau_awu**

```cpp
inline void set_tau_awu(
    data_t tau
)
```



---
### **set_control_type**

```cpp
inline void set_control_type(
    size_t control_type
)
```



**Parameters**:

  * **control_type** control type bit mask


**Template Parameters**:

  * **[System](/lds-ctrl-est/docs/api/classes/classlds_1_1_system/)** type derived from [lds::System](/lds-ctrl-est/docs/api/classes/classlds_1_1_system/)


---
### **Reset**

```cpp
inline void Reset()
```



---
### **Print**

```cpp
inline void Print()
```



---


## Protected Attribute Details

### **sys_**

```cpp
System sys_;
```



---
### **u_**

```cpp
Vector u_;
```



---
### **g_design_**

```cpp
Vector g_design_;
```



---
### **u_ref_**

```cpp
Vector u_ref_;
```



---
### **u_ref_prev_**

```cpp
Vector u_ref_prev_;
```



---
### **x_ref_**

```cpp
Vector x_ref_;
```



---
### **y_ref_**

```cpp
Vector y_ref_;
```



---
### **cx_ref_**

```cpp
Vector cx_ref_;
```



---
### **Kc_**

```cpp
Matrix Kc_;
```



---
### **Kc_u_**

```cpp
Matrix Kc_u_;
```



---
### **Kc_inty_**

```cpp
Matrix Kc_inty_;
```



---
### **du_ref_**

```cpp
Vector du_ref_;
```



---
### **dv_ref_**

```cpp
Vector dv_ref_;
```



---
### **v_ref_**

```cpp
Vector v_ref_;
```



---
### **dv_**

```cpp
Vector dv_;
```



---
### **v_**

```cpp
Vector v_;
```



---
### **int_e_**

```cpp
Vector int_e_;
```



---
### **int_e_awu_adjust_**

```cpp
Vector int_e_awu_adjust_;
```



---
### **u_sat_**

```cpp
Vector u_sat_;
```



---
### **do_control_prev_**

```cpp
bool do_control_prev_ = false;
```



---
### **do_lock_control_prev_**

```cpp
bool do_lock_control_prev_ = false;
```



---
### **u_saturated_**

```cpp
bool u_saturated_ =
      false;
```



---
### **u_lb_**

```cpp
data_t u_lb_ {};
```



---
### **u_ub_**

```cpp
data_t u_ub_ {};
```



---
### **tau_awu_**

```cpp
data_t tau_awu_ {};
```



---
### **k_awu_**

```cpp
data_t k_awu_ = 0;
```



---
### **t_since_control_onset_**

```cpp
data_t t_since_control_onset_ = 0;
```



---
### **control_type_**

```cpp
size_t control_type_ {};
```



---


-------------------------------

Updated on 30 March 2021 at 15:49:43 CDT
