/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:09:38 GMT-04:00
 */

#ifdef MATLAB_MEX_FILE
#include <stdexcept>
#include <cmath>
/**
 * Copied from Wolfram Mathematica C Definitions file mdefs.hpp
 * Changed marcos to inline functions (Eric Cousineau)
 */
inline double Power(double x, double y) { return pow(x, y); }
inline double Sqrt(double x) { return sqrt(x); }

inline double Abs(double x) { return fabs(x); }

inline double Exp(double x) { return exp(x); }
inline double Log(double x) { return log(x); }

inline double Sin(double x) { return sin(x); }
inline double Cos(double x) { return cos(x); }
inline double Tan(double x) { return tan(x); }

inline double ArcSin(double x) { return asin(x); }
inline double ArcCos(double x) { return acos(x); }
inline double ArcTan(double x) { return atan(x); }

/* update ArcTan function to use atan2 instead. */
inline double ArcTan(double x, double y) { return atan2(y,x); }

inline double Sinh(double x) { return sinh(x); }
inline double Cosh(double x) { return cosh(x); }
inline double Tanh(double x) { return tanh(x); }

const double E	= 2.71828182845904523536029;
const double Pi = 3.14159265358979323846264;
const double Degree = 0.01745329251994329576924;


#endif

/*
 * Sub functions
 */
static void output1(double *p_output1,const double *var1,const double *var2)
{
  double _NotUsed;
  NULL;
  p_output1[0]=1;
  p_output1[1]=-1;
  p_output1[2]=1;
  p_output1[3]=-1;
  p_output1[4]=1;
  p_output1[5]=-1;
  p_output1[6]=1;
  p_output1[7]=-1;
  p_output1[8]=1;
  p_output1[9]=-1;
  p_output1[10]=1;
  p_output1[11]=-1;
  p_output1[12]=1;
  p_output1[13]=-1;
  p_output1[14]=1;
  p_output1[15]=-1;
  p_output1[16]=1;
  p_output1[17]=-1;
  p_output1[18]=1;
  p_output1[19]=-1;
  p_output1[20]=1;
  p_output1[21]=-1;
  p_output1[22]=1;
  p_output1[23]=-1;
  p_output1[24]=1;
  p_output1[25]=-1;
  p_output1[26]=1;
  p_output1[27]=-1;
  p_output1[28]=1;
  p_output1[29]=-1;
  p_output1[30]=1;
  p_output1[31]=-1;
  p_output1[32]=1;
  p_output1[33]=-1;
  p_output1[34]=1;
  p_output1[35]=-1;
  p_output1[36]=1;
  p_output1[37]=-1;
  p_output1[38]=1;
  p_output1[39]=-1;
  p_output1[40]=1;
  p_output1[41]=-1;
  p_output1[42]=1;
  p_output1[43]=-1;
  p_output1[44]=1;
  p_output1[45]=-1;
  p_output1[46]=1;
  p_output1[47]=-1;
  p_output1[48]=1;
  p_output1[49]=-1;
  p_output1[50]=1;
  p_output1[51]=-1;
  p_output1[52]=1;
  p_output1[53]=-1;
  p_output1[54]=1;
  p_output1[55]=-1;
  p_output1[56]=1;
  p_output1[57]=-1;
  p_output1[58]=1;
  p_output1[59]=-1;
  p_output1[60]=1;
  p_output1[61]=-1;
  p_output1[62]=1;
  p_output1[63]=-1;
  p_output1[64]=1;
  p_output1[65]=-1;
  p_output1[66]=1;
  p_output1[67]=-1;
  p_output1[68]=1;
  p_output1[69]=-1;
  p_output1[70]=1;
  p_output1[71]=-1;
  p_output1[72]=1;
  p_output1[73]=-1;
  p_output1[74]=1;
  p_output1[75]=-1;
  p_output1[76]=1;
  p_output1[77]=-1;
  p_output1[78]=1;
  p_output1[79]=-1;
  p_output1[80]=1;
  p_output1[81]=-1;
  p_output1[82]=1;
  p_output1[83]=-1;
  p_output1[84]=1;
  p_output1[85]=-1;
  p_output1[86]=1;
  p_output1[87]=-1;
  p_output1[88]=1;
  p_output1[89]=-1;
  p_output1[90]=1;
  p_output1[91]=-1;
  p_output1[92]=1;
  p_output1[93]=-1;
  p_output1[94]=1;
  p_output1[95]=-1;
  p_output1[96]=1;
  p_output1[97]=-1;
  p_output1[98]=1;
  p_output1[99]=-1;
  p_output1[100]=1;
  p_output1[101]=-1;
  p_output1[102]=1;
  p_output1[103]=-1;
  p_output1[104]=1;
  p_output1[105]=-1;
  p_output1[106]=1;
  p_output1[107]=-1;
  p_output1[108]=1;
  p_output1[109]=-1;
  p_output1[110]=1;
  p_output1[111]=-1;
  p_output1[112]=1;
  p_output1[113]=-1;
  p_output1[114]=1;
  p_output1[115]=-1;
  p_output1[116]=1;
  p_output1[117]=-1;
  p_output1[118]=1;
  p_output1[119]=-1;
}



#ifdef MATLAB_MEX_FILE

#include "mex.h"
/*
 * Main function
 */
void mexFunction( int nlhs, mxArray *plhs[],
                  int nrhs, const mxArray *prhs[] )
{
  size_t mrows, ncols;

  double *var1,*var2;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 2)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Two input(s) required (var1,var2).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 60) && 
      !(mrows == 60 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 1 && ncols == 60) && 
      !(mrows == 60 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 120, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2);


}

#else // MATLAB_MEX_FILE

#include "J_atimeCont_LeftStance.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void J_atimeCont_LeftStance_raw(double *p_output1, const double *var1,const double *var2)
{
  // Call Subroutines
  output1(p_output1, var1, var2);

}

}

#endif // MATLAB_MEX_FILE
