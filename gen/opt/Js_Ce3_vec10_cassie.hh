/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 21:52:48 GMT-04:00
 */

#ifndef JS_CE3_VEC10_CASSIE_HH
#define JS_CE3_VEC10_CASSIE_HH

#ifdef MATLAB_MEX_FILE
// No need for external definitions
#else // MATLAB_MEX_FILE


#include "math2mat.hpp"
#include "mdefs.hpp"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

  void Js_Ce3_vec10_cassie_raw(double *p_output1, const double *var1);

  inline void Js_Ce3_vec10_cassie(Eigen::MatrixXd &p_output1, const Eigen::VectorXd &var1)
  {
    // Check
    // - Inputs
    assert_size_matrix(var1, 1, 1);

	
    // - Outputs
    assert_size_matrix(p_output1, 225, 2);


    // set zero the matrix
    p_output1.setZero();


    // Call Subroutine with raw data
    Js_Ce3_vec10_cassie_raw(p_output1.data(), var1.data());
    }
  
  
}

#endif // MATLAB_MEX_FILE

#endif // JS_CE3_VEC10_CASSIE_HH
