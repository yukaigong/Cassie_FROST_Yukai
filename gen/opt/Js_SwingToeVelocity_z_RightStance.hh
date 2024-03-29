/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:38:44 GMT-04:00
 */

#ifndef JS_SWINGTOEVELOCITY_Z_RIGHTSTANCE_HH
#define JS_SWINGTOEVELOCITY_Z_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[Cassie, Blank[oneStep]]
{

  void Js_SwingToeVelocity_z_RightStance_raw(double *p_output1, const double *var1);

  inline void Js_SwingToeVelocity_z_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 23, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_SwingToeVelocity_z_RightStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_SWINGTOEVELOCITY_Z_RIGHTSTANCE_HH
