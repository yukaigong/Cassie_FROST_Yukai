/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 18:26:13 GMT-04:00
 */

#ifndef FFOURBAR_VEC_RIGHTSTANCE_HH
#define FFOURBAR_VEC_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

  void ffourBar_vec_RightStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void ffourBar_vec_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 2, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 22, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    ffourBar_vec_RightStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // FFOURBAR_VEC_RIGHTSTANCE_HH
