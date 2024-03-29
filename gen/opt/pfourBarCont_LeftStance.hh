/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:09:33 GMT-04:00
 */

#ifndef PFOURBARCONT_LEFTSTANCE_HH
#define PFOURBARCONT_LEFTSTANCE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

  void pfourBarCont_LeftStance_raw(double *p_output1, const double *var1,const double *var2);

  inline void pfourBarCont_LeftStance(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1,const Eigen::VectorXd &var2)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 2);
    assert_size_matrix(var2, 1, 2);

	
    // - Outputs
    assert_size_matrix(p_output1, 2, 1);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    pfourBarCont_LeftStance_raw(p_output1.data(), var1.data(),var2.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // PFOURBARCONT_LEFTSTANCE_HH
