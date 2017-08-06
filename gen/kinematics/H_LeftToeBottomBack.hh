/*
 * Automatically Generated from Mathematica.
 * Fri 4 Aug 2017 15:36:28 GMT-04:00
 */

#ifndef H_LEFTTOEBOTTOMBACK_HH
#define H_LEFTTOEBOTTOMBACK_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace SymExpression
{

  void H_LeftToeBottomBack_raw(double *p_output1, const double *var1);

  inline void H_LeftToeBottomBack(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 22, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 4, 4);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    H_LeftToeBottomBack_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // H_LEFTTOEBOTTOMBACK_HH
