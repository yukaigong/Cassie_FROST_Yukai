/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:38:35 GMT-04:00
 */

#ifndef J_HIPROTATIONANGLES_RIGHTSTANCE_HH
#define J_HIPROTATIONANGLES_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[Cassie, Blank[oneStep]]
{

  void J_HipRotationAngles_RightStance_raw(double *p_output1, const double *var1);

  inline void J_HipRotationAngles_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    J_HipRotationAngles_RightStance_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // J_HIPROTATIONANGLES_RIGHTSTANCE_HH
