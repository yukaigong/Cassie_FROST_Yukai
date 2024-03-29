/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:09:35 GMT-04:00
 */

#ifndef PLEFTTOEBOTTOMCONT_LEFTSTANCE_HH
#define PLEFTTOEBOTTOMCONT_LEFTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

  void pLeftToeBottomCont_LeftStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void pLeftToeBottomCont_LeftStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 5);
    assert_size_matrix(var2, 1, 5);

	
    // - Outputs
    assert_size_matrix(p_output1, 5, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    pLeftToeBottomCont_LeftStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // PLEFTTOEBOTTOMCONT_LEFTSTANCE_HH
