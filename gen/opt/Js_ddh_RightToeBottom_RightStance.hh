/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:42:04 GMT-04:00
 */

#ifndef JS_DDH_RIGHTTOEBOTTOM_RIGHTSTANCE_HH
#define JS_DDH_RIGHTTOEBOTTOM_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[Cassie, Blank[oneStep]]
{

  void Js_ddh_RightToeBottom_RightStance_raw(double *p_output1, const double *var1);

  inline void Js_ddh_RightToeBottom_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 160, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_ddh_RightToeBottom_RightStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_DDH_RIGHTTOEBOTTOM_RIGHTSTANCE_HH
