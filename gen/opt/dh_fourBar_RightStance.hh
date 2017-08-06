/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:37:13 GMT-04:00
 */

#ifndef DH_FOURBAR_RIGHTSTANCE_HH
#define DH_FOURBAR_RIGHTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Pattern[Cassie, Blank[oneStep]]
{

  void dh_fourBar_RightStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void dh_fourBar_RightStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);
    assert_size_matrix(var2, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    dh_fourBar_RightStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // DH_FOURBAR_RIGHTSTANCE_HH
