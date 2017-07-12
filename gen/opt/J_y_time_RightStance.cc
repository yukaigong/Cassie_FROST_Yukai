/*
 * Automatically Generated from Mathematica.
 * Tue 20 Jun 2017 12:42:09 GMT-04:00
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
static void output1(double *p_output1,const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  double t2134;
  double t1340;
  double t1729;
  double t1887;
  double t1902;
  double t1908;
  double t2158;
  double t2230;
  double t2242;
  double t2249;
  double t2275;
  double t2334;
  double t2405;
  double t2420;
  double t2430;
  double t2438;
  double t2439;
  double t2443;
  double t2448;
  double t2451;
  double t2484;
  double t3560;
  double t3587;
  double t3604;
  double t3672;
  double t3677;
  double t3757;
  double t3758;
  double t3644;
  double t3648;
  double t3652;
  double t3660;
  double t3664;
  double t3668;
  double t3676;
  t2134 = -1.*var4[1];
  t1340 = -1. + var5[0];
  t1729 = -1. + var6[0];
  t1887 = 1/t1729;
  t1902 = -1.*t1340*t1887;
  t1908 = 1. + t1902;
  t2158 = var4[0] + t2134;
  t2230 = Power(t2158,-5);
  t2242 = -1.*var1[0];
  t2249 = t2242 + var1[1];
  t2275 = t1340*t1887*t2249;
  t2334 = t2134 + var1[0] + t2275;
  t2405 = Power(t2334,4);
  t2420 = Power(t2158,-4);
  t2430 = Power(t2334,3);
  t2438 = 1/t2158;
  t2439 = -1.*t2438*t2334;
  t2443 = 1. + t2439;
  t2448 = Power(t2158,-3);
  t2451 = Power(t2334,2);
  t2484 = Power(t2443,2);
  t3560 = Power(t2158,-2);
  t3587 = Power(t2443,3);
  t3604 = Power(t2443,4);
  t3672 = Power(t2334,5);
  t3677 = Power(t2158,-6);
  t3757 = -1.*t3560*t2334;
  t3758 = t2438 + t3757;
  t3644 = Power(t2443,5);
  t3648 = -1.*t3644;
  t3652 = -5.*t2438*t2334*t3604;
  t3660 = -10.*t3560*t2451*t3587;
  t3664 = -10.*t2448*t2430*t2484;
  t3668 = -5.*t2420*t2405*t2443;
  t3676 = -1.*t2230*t3672;
  p_output1[0]=5.*t1908*t2438*t3604*var3[0] + 20.*t1908*t2334*t3560*t3587*var3[10] - 5.*t1908*t2438*t3604*var3[10] + 30.*t1908*t2448*t2451*t2484*var3[20] - 20.*t1908*t2334*t3560*t3587*var3[20] + 20.*t1908*t2420*t2430*t2443*var3[30] - 30.*t1908*t2448*t2451*t2484*var3[30] + 5.*t1908*t2230*t2405*var3[40] - 20.*t1908*t2420*t2430*t2443*var3[40] - 5.*t1908*t2230*t2405*var3[50];
  p_output1[1]=5.*t1340*t1887*t2438*t3604*var3[0] + 20.*t1340*t1887*t2334*t3560*t3587*var3[10] - 5.*t1340*t1887*t2438*t3604*var3[10] + 30.*t1340*t1887*t2448*t2451*t2484*var3[20] - 20.*t1340*t1887*t2334*t3560*t3587*var3[20] + 20.*t1340*t1887*t2420*t2430*t2443*var3[30] - 30.*t1340*t1887*t2448*t2451*t2484*var3[30] + 5.*t1340*t1887*t2230*t2405*var3[40] - 20.*t1340*t1887*t2420*t2430*t2443*var3[40] - 5.*t1340*t1887*t2230*t2405*var3[50];
  p_output1[2]=1.;
  p_output1[3]=t3648;
  p_output1[4]=t3652;
  p_output1[5]=t3660;
  p_output1[6]=t3664;
  p_output1[7]=t3668;
  p_output1[8]=t3676;
  p_output1[9]=-5.*t2334*t3560*t3604*var3[0] - 20.*t2448*t2451*t3587*var3[10] + 5.*t2334*t3560*t3604*var3[10] - 30.*t2420*t2430*t2484*var3[20] + 20.*t2448*t2451*t3587*var3[20] - 20.*t2230*t2405*t2443*var3[30] + 30.*t2420*t2430*t2484*var3[30] + 20.*t2230*t2405*t2443*var3[40] - 5.*t3672*t3677*var3[40] + 5.*t3672*t3677*var3[50];
  p_output1[10]=-5.*t3604*t3758*var3[0] + 5.*t2438*t3604*var3[10] - 5.*t2334*t3560*t3604*var3[10] - 20.*t2334*t2438*t3587*t3758*var3[10] - 20.*t2448*t2451*t3587*var3[20] + 20.*t2334*t3560*t3587*var3[20] - 30.*t2451*t2484*t3560*t3758*var3[20] - 30.*t2420*t2430*t2484*var3[30] + 30.*t2448*t2451*t2484*var3[30] - 20.*t2430*t2443*t2448*t3758*var3[30] - 20.*t2230*t2405*t2443*var3[40] + 20.*t2420*t2430*t2443*var3[40] - 5.*t2405*t2420*t3758*var3[40] + 5.*t2230*t2405*var3[50] - 5.*t3672*t3677*var3[50];
  p_output1[11]=5.*t1908*t2438*t3604*var3[1] + 20.*t1908*t2334*t3560*t3587*var3[11] - 5.*t1908*t2438*t3604*var3[11] + 30.*t1908*t2448*t2451*t2484*var3[21] - 20.*t1908*t2334*t3560*t3587*var3[21] + 20.*t1908*t2420*t2430*t2443*var3[31] - 30.*t1908*t2448*t2451*t2484*var3[31] + 5.*t1908*t2230*t2405*var3[41] - 20.*t1908*t2420*t2430*t2443*var3[41] - 5.*t1908*t2230*t2405*var3[51];
  p_output1[12]=5.*t1340*t1887*t2438*t3604*var3[1] + 20.*t1340*t1887*t2334*t3560*t3587*var3[11] - 5.*t1340*t1887*t2438*t3604*var3[11] + 30.*t1340*t1887*t2448*t2451*t2484*var3[21] - 20.*t1340*t1887*t2334*t3560*t3587*var3[21] + 20.*t1340*t1887*t2420*t2430*t2443*var3[31] - 30.*t1340*t1887*t2448*t2451*t2484*var3[31] + 5.*t1340*t1887*t2230*t2405*var3[41] - 20.*t1340*t1887*t2420*t2430*t2443*var3[41] - 5.*t1340*t1887*t2230*t2405*var3[51];
  p_output1[13]=1.;
  p_output1[14]=t3648;
  p_output1[15]=t3652;
  p_output1[16]=t3660;
  p_output1[17]=t3664;
  p_output1[18]=t3668;
  p_output1[19]=t3676;
  p_output1[20]=-5.*t2334*t3560*t3604*var3[1] - 20.*t2448*t2451*t3587*var3[11] + 5.*t2334*t3560*t3604*var3[11] - 30.*t2420*t2430*t2484*var3[21] + 20.*t2448*t2451*t3587*var3[21] - 20.*t2230*t2405*t2443*var3[31] + 30.*t2420*t2430*t2484*var3[31] + 20.*t2230*t2405*t2443*var3[41] - 5.*t3672*t3677*var3[41] + 5.*t3672*t3677*var3[51];
  p_output1[21]=-5.*t3604*t3758*var3[1] + 5.*t2438*t3604*var3[11] - 5.*t2334*t3560*t3604*var3[11] - 20.*t2334*t2438*t3587*t3758*var3[11] - 20.*t2448*t2451*t3587*var3[21] + 20.*t2334*t3560*t3587*var3[21] - 30.*t2451*t2484*t3560*t3758*var3[21] - 30.*t2420*t2430*t2484*var3[31] + 30.*t2448*t2451*t2484*var3[31] - 20.*t2430*t2443*t2448*t3758*var3[31] - 20.*t2230*t2405*t2443*var3[41] + 20.*t2420*t2430*t2443*var3[41] - 5.*t2405*t2420*t3758*var3[41] + 5.*t2230*t2405*var3[51] - 5.*t3672*t3677*var3[51];
  p_output1[22]=5.*t1908*t2438*t3604*var3[2] + 20.*t1908*t2334*t3560*t3587*var3[12] - 5.*t1908*t2438*t3604*var3[12] + 30.*t1908*t2448*t2451*t2484*var3[22] - 20.*t1908*t2334*t3560*t3587*var3[22] + 20.*t1908*t2420*t2430*t2443*var3[32] - 30.*t1908*t2448*t2451*t2484*var3[32] + 5.*t1908*t2230*t2405*var3[42] - 20.*t1908*t2420*t2430*t2443*var3[42] - 5.*t1908*t2230*t2405*var3[52];
  p_output1[23]=5.*t1340*t1887*t2438*t3604*var3[2] + 20.*t1340*t1887*t2334*t3560*t3587*var3[12] - 5.*t1340*t1887*t2438*t3604*var3[12] + 30.*t1340*t1887*t2448*t2451*t2484*var3[22] - 20.*t1340*t1887*t2334*t3560*t3587*var3[22] + 20.*t1340*t1887*t2420*t2430*t2443*var3[32] - 30.*t1340*t1887*t2448*t2451*t2484*var3[32] + 5.*t1340*t1887*t2230*t2405*var3[42] - 20.*t1340*t1887*t2420*t2430*t2443*var3[42] - 5.*t1340*t1887*t2230*t2405*var3[52];
  p_output1[24]=1.;
  p_output1[25]=t3648;
  p_output1[26]=t3652;
  p_output1[27]=t3660;
  p_output1[28]=t3664;
  p_output1[29]=t3668;
  p_output1[30]=t3676;
  p_output1[31]=-5.*t2334*t3560*t3604*var3[2] - 20.*t2448*t2451*t3587*var3[12] + 5.*t2334*t3560*t3604*var3[12] - 30.*t2420*t2430*t2484*var3[22] + 20.*t2448*t2451*t3587*var3[22] - 20.*t2230*t2405*t2443*var3[32] + 30.*t2420*t2430*t2484*var3[32] + 20.*t2230*t2405*t2443*var3[42] - 5.*t3672*t3677*var3[42] + 5.*t3672*t3677*var3[52];
  p_output1[32]=-5.*t3604*t3758*var3[2] + 5.*t2438*t3604*var3[12] - 5.*t2334*t3560*t3604*var3[12] - 20.*t2334*t2438*t3587*t3758*var3[12] - 20.*t2448*t2451*t3587*var3[22] + 20.*t2334*t3560*t3587*var3[22] - 30.*t2451*t2484*t3560*t3758*var3[22] - 30.*t2420*t2430*t2484*var3[32] + 30.*t2448*t2451*t2484*var3[32] - 20.*t2430*t2443*t2448*t3758*var3[32] - 20.*t2230*t2405*t2443*var3[42] + 20.*t2420*t2430*t2443*var3[42] - 5.*t2405*t2420*t3758*var3[42] + 5.*t2230*t2405*var3[52] - 5.*t3672*t3677*var3[52];
  p_output1[33]=5.*t1908*t2438*t3604*var3[3] + 20.*t1908*t2334*t3560*t3587*var3[13] - 5.*t1908*t2438*t3604*var3[13] + 30.*t1908*t2448*t2451*t2484*var3[23] - 20.*t1908*t2334*t3560*t3587*var3[23] + 20.*t1908*t2420*t2430*t2443*var3[33] - 30.*t1908*t2448*t2451*t2484*var3[33] + 5.*t1908*t2230*t2405*var3[43] - 20.*t1908*t2420*t2430*t2443*var3[43] - 5.*t1908*t2230*t2405*var3[53];
  p_output1[34]=5.*t1340*t1887*t2438*t3604*var3[3] + 20.*t1340*t1887*t2334*t3560*t3587*var3[13] - 5.*t1340*t1887*t2438*t3604*var3[13] + 30.*t1340*t1887*t2448*t2451*t2484*var3[23] - 20.*t1340*t1887*t2334*t3560*t3587*var3[23] + 20.*t1340*t1887*t2420*t2430*t2443*var3[33] - 30.*t1340*t1887*t2448*t2451*t2484*var3[33] + 5.*t1340*t1887*t2230*t2405*var3[43] - 20.*t1340*t1887*t2420*t2430*t2443*var3[43] - 5.*t1340*t1887*t2230*t2405*var3[53];
  p_output1[35]=1.;
  p_output1[36]=t3648;
  p_output1[37]=t3652;
  p_output1[38]=t3660;
  p_output1[39]=t3664;
  p_output1[40]=t3668;
  p_output1[41]=t3676;
  p_output1[42]=-5.*t2334*t3560*t3604*var3[3] - 20.*t2448*t2451*t3587*var3[13] + 5.*t2334*t3560*t3604*var3[13] - 30.*t2420*t2430*t2484*var3[23] + 20.*t2448*t2451*t3587*var3[23] - 20.*t2230*t2405*t2443*var3[33] + 30.*t2420*t2430*t2484*var3[33] + 20.*t2230*t2405*t2443*var3[43] - 5.*t3672*t3677*var3[43] + 5.*t3672*t3677*var3[53];
  p_output1[43]=-5.*t3604*t3758*var3[3] + 5.*t2438*t3604*var3[13] - 5.*t2334*t3560*t3604*var3[13] - 20.*t2334*t2438*t3587*t3758*var3[13] - 20.*t2448*t2451*t3587*var3[23] + 20.*t2334*t3560*t3587*var3[23] - 30.*t2451*t2484*t3560*t3758*var3[23] - 30.*t2420*t2430*t2484*var3[33] + 30.*t2448*t2451*t2484*var3[33] - 20.*t2430*t2443*t2448*t3758*var3[33] - 20.*t2230*t2405*t2443*var3[43] + 20.*t2420*t2430*t2443*var3[43] - 5.*t2405*t2420*t3758*var3[43] + 5.*t2230*t2405*var3[53] - 5.*t3672*t3677*var3[53];
  p_output1[44]=5.*t1908*t2438*t3604*var3[4] + 20.*t1908*t2334*t3560*t3587*var3[14] - 5.*t1908*t2438*t3604*var3[14] + 30.*t1908*t2448*t2451*t2484*var3[24] - 20.*t1908*t2334*t3560*t3587*var3[24] + 20.*t1908*t2420*t2430*t2443*var3[34] - 30.*t1908*t2448*t2451*t2484*var3[34] + 5.*t1908*t2230*t2405*var3[44] - 20.*t1908*t2420*t2430*t2443*var3[44] - 5.*t1908*t2230*t2405*var3[54];
  p_output1[45]=5.*t1340*t1887*t2438*t3604*var3[4] + 20.*t1340*t1887*t2334*t3560*t3587*var3[14] - 5.*t1340*t1887*t2438*t3604*var3[14] + 30.*t1340*t1887*t2448*t2451*t2484*var3[24] - 20.*t1340*t1887*t2334*t3560*t3587*var3[24] + 20.*t1340*t1887*t2420*t2430*t2443*var3[34] - 30.*t1340*t1887*t2448*t2451*t2484*var3[34] + 5.*t1340*t1887*t2230*t2405*var3[44] - 20.*t1340*t1887*t2420*t2430*t2443*var3[44] - 5.*t1340*t1887*t2230*t2405*var3[54];
  p_output1[46]=1.;
  p_output1[47]=t3648;
  p_output1[48]=t3652;
  p_output1[49]=t3660;
  p_output1[50]=t3664;
  p_output1[51]=t3668;
  p_output1[52]=t3676;
  p_output1[53]=-5.*t2334*t3560*t3604*var3[4] - 20.*t2448*t2451*t3587*var3[14] + 5.*t2334*t3560*t3604*var3[14] - 30.*t2420*t2430*t2484*var3[24] + 20.*t2448*t2451*t3587*var3[24] - 20.*t2230*t2405*t2443*var3[34] + 30.*t2420*t2430*t2484*var3[34] + 20.*t2230*t2405*t2443*var3[44] - 5.*t3672*t3677*var3[44] + 5.*t3672*t3677*var3[54];
  p_output1[54]=-5.*t3604*t3758*var3[4] + 5.*t2438*t3604*var3[14] - 5.*t2334*t3560*t3604*var3[14] - 20.*t2334*t2438*t3587*t3758*var3[14] - 20.*t2448*t2451*t3587*var3[24] + 20.*t2334*t3560*t3587*var3[24] - 30.*t2451*t2484*t3560*t3758*var3[24] - 30.*t2420*t2430*t2484*var3[34] + 30.*t2448*t2451*t2484*var3[34] - 20.*t2430*t2443*t2448*t3758*var3[34] - 20.*t2230*t2405*t2443*var3[44] + 20.*t2420*t2430*t2443*var3[44] - 5.*t2405*t2420*t3758*var3[44] + 5.*t2230*t2405*var3[54] - 5.*t3672*t3677*var3[54];
  p_output1[55]=5.*t1908*t2438*t3604*var3[5] + 20.*t1908*t2334*t3560*t3587*var3[15] - 5.*t1908*t2438*t3604*var3[15] + 30.*t1908*t2448*t2451*t2484*var3[25] - 20.*t1908*t2334*t3560*t3587*var3[25] + 20.*t1908*t2420*t2430*t2443*var3[35] - 30.*t1908*t2448*t2451*t2484*var3[35] + 5.*t1908*t2230*t2405*var3[45] - 20.*t1908*t2420*t2430*t2443*var3[45] - 5.*t1908*t2230*t2405*var3[55];
  p_output1[56]=5.*t1340*t1887*t2438*t3604*var3[5] + 20.*t1340*t1887*t2334*t3560*t3587*var3[15] - 5.*t1340*t1887*t2438*t3604*var3[15] + 30.*t1340*t1887*t2448*t2451*t2484*var3[25] - 20.*t1340*t1887*t2334*t3560*t3587*var3[25] + 20.*t1340*t1887*t2420*t2430*t2443*var3[35] - 30.*t1340*t1887*t2448*t2451*t2484*var3[35] + 5.*t1340*t1887*t2230*t2405*var3[45] - 20.*t1340*t1887*t2420*t2430*t2443*var3[45] - 5.*t1340*t1887*t2230*t2405*var3[55];
  p_output1[57]=1.;
  p_output1[58]=t3648;
  p_output1[59]=t3652;
  p_output1[60]=t3660;
  p_output1[61]=t3664;
  p_output1[62]=t3668;
  p_output1[63]=t3676;
  p_output1[64]=-5.*t2334*t3560*t3604*var3[5] - 20.*t2448*t2451*t3587*var3[15] + 5.*t2334*t3560*t3604*var3[15] - 30.*t2420*t2430*t2484*var3[25] + 20.*t2448*t2451*t3587*var3[25] - 20.*t2230*t2405*t2443*var3[35] + 30.*t2420*t2430*t2484*var3[35] + 20.*t2230*t2405*t2443*var3[45] - 5.*t3672*t3677*var3[45] + 5.*t3672*t3677*var3[55];
  p_output1[65]=-5.*t3604*t3758*var3[5] + 5.*t2438*t3604*var3[15] - 5.*t2334*t3560*t3604*var3[15] - 20.*t2334*t2438*t3587*t3758*var3[15] - 20.*t2448*t2451*t3587*var3[25] + 20.*t2334*t3560*t3587*var3[25] - 30.*t2451*t2484*t3560*t3758*var3[25] - 30.*t2420*t2430*t2484*var3[35] + 30.*t2448*t2451*t2484*var3[35] - 20.*t2430*t2443*t2448*t3758*var3[35] - 20.*t2230*t2405*t2443*var3[45] + 20.*t2420*t2430*t2443*var3[45] - 5.*t2405*t2420*t3758*var3[45] + 5.*t2230*t2405*var3[55] - 5.*t3672*t3677*var3[55];
  p_output1[66]=5.*t1908*t2438*t3604*var3[6] + 20.*t1908*t2334*t3560*t3587*var3[16] - 5.*t1908*t2438*t3604*var3[16] + 30.*t1908*t2448*t2451*t2484*var3[26] - 20.*t1908*t2334*t3560*t3587*var3[26] + 20.*t1908*t2420*t2430*t2443*var3[36] - 30.*t1908*t2448*t2451*t2484*var3[36] + 5.*t1908*t2230*t2405*var3[46] - 20.*t1908*t2420*t2430*t2443*var3[46] - 5.*t1908*t2230*t2405*var3[56];
  p_output1[67]=5.*t1340*t1887*t2438*t3604*var3[6] + 20.*t1340*t1887*t2334*t3560*t3587*var3[16] - 5.*t1340*t1887*t2438*t3604*var3[16] + 30.*t1340*t1887*t2448*t2451*t2484*var3[26] - 20.*t1340*t1887*t2334*t3560*t3587*var3[26] + 20.*t1340*t1887*t2420*t2430*t2443*var3[36] - 30.*t1340*t1887*t2448*t2451*t2484*var3[36] + 5.*t1340*t1887*t2230*t2405*var3[46] - 20.*t1340*t1887*t2420*t2430*t2443*var3[46] - 5.*t1340*t1887*t2230*t2405*var3[56];
  p_output1[68]=1.;
  p_output1[69]=t3648;
  p_output1[70]=t3652;
  p_output1[71]=t3660;
  p_output1[72]=t3664;
  p_output1[73]=t3668;
  p_output1[74]=t3676;
  p_output1[75]=-5.*t2334*t3560*t3604*var3[6] - 20.*t2448*t2451*t3587*var3[16] + 5.*t2334*t3560*t3604*var3[16] - 30.*t2420*t2430*t2484*var3[26] + 20.*t2448*t2451*t3587*var3[26] - 20.*t2230*t2405*t2443*var3[36] + 30.*t2420*t2430*t2484*var3[36] + 20.*t2230*t2405*t2443*var3[46] - 5.*t3672*t3677*var3[46] + 5.*t3672*t3677*var3[56];
  p_output1[76]=-5.*t3604*t3758*var3[6] + 5.*t2438*t3604*var3[16] - 5.*t2334*t3560*t3604*var3[16] - 20.*t2334*t2438*t3587*t3758*var3[16] - 20.*t2448*t2451*t3587*var3[26] + 20.*t2334*t3560*t3587*var3[26] - 30.*t2451*t2484*t3560*t3758*var3[26] - 30.*t2420*t2430*t2484*var3[36] + 30.*t2448*t2451*t2484*var3[36] - 20.*t2430*t2443*t2448*t3758*var3[36] - 20.*t2230*t2405*t2443*var3[46] + 20.*t2420*t2430*t2443*var3[46] - 5.*t2405*t2420*t3758*var3[46] + 5.*t2230*t2405*var3[56] - 5.*t3672*t3677*var3[56];
  p_output1[77]=5.*t1908*t2438*t3604*var3[7] + 20.*t1908*t2334*t3560*t3587*var3[17] - 5.*t1908*t2438*t3604*var3[17] + 30.*t1908*t2448*t2451*t2484*var3[27] - 20.*t1908*t2334*t3560*t3587*var3[27] + 20.*t1908*t2420*t2430*t2443*var3[37] - 30.*t1908*t2448*t2451*t2484*var3[37] + 5.*t1908*t2230*t2405*var3[47] - 20.*t1908*t2420*t2430*t2443*var3[47] - 5.*t1908*t2230*t2405*var3[57];
  p_output1[78]=5.*t1340*t1887*t2438*t3604*var3[7] + 20.*t1340*t1887*t2334*t3560*t3587*var3[17] - 5.*t1340*t1887*t2438*t3604*var3[17] + 30.*t1340*t1887*t2448*t2451*t2484*var3[27] - 20.*t1340*t1887*t2334*t3560*t3587*var3[27] + 20.*t1340*t1887*t2420*t2430*t2443*var3[37] - 30.*t1340*t1887*t2448*t2451*t2484*var3[37] + 5.*t1340*t1887*t2230*t2405*var3[47] - 20.*t1340*t1887*t2420*t2430*t2443*var3[47] - 5.*t1340*t1887*t2230*t2405*var3[57];
  p_output1[79]=1.;
  p_output1[80]=t3648;
  p_output1[81]=t3652;
  p_output1[82]=t3660;
  p_output1[83]=t3664;
  p_output1[84]=t3668;
  p_output1[85]=t3676;
  p_output1[86]=-5.*t2334*t3560*t3604*var3[7] - 20.*t2448*t2451*t3587*var3[17] + 5.*t2334*t3560*t3604*var3[17] - 30.*t2420*t2430*t2484*var3[27] + 20.*t2448*t2451*t3587*var3[27] - 20.*t2230*t2405*t2443*var3[37] + 30.*t2420*t2430*t2484*var3[37] + 20.*t2230*t2405*t2443*var3[47] - 5.*t3672*t3677*var3[47] + 5.*t3672*t3677*var3[57];
  p_output1[87]=-5.*t3604*t3758*var3[7] + 5.*t2438*t3604*var3[17] - 5.*t2334*t3560*t3604*var3[17] - 20.*t2334*t2438*t3587*t3758*var3[17] - 20.*t2448*t2451*t3587*var3[27] + 20.*t2334*t3560*t3587*var3[27] - 30.*t2451*t2484*t3560*t3758*var3[27] - 30.*t2420*t2430*t2484*var3[37] + 30.*t2448*t2451*t2484*var3[37] - 20.*t2430*t2443*t2448*t3758*var3[37] - 20.*t2230*t2405*t2443*var3[47] + 20.*t2420*t2430*t2443*var3[47] - 5.*t2405*t2420*t3758*var3[47] + 5.*t2230*t2405*var3[57] - 5.*t3672*t3677*var3[57];
  p_output1[88]=5.*t1908*t2438*t3604*var3[8] + 20.*t1908*t2334*t3560*t3587*var3[18] - 5.*t1908*t2438*t3604*var3[18] + 30.*t1908*t2448*t2451*t2484*var3[28] - 20.*t1908*t2334*t3560*t3587*var3[28] + 20.*t1908*t2420*t2430*t2443*var3[38] - 30.*t1908*t2448*t2451*t2484*var3[38] + 5.*t1908*t2230*t2405*var3[48] - 20.*t1908*t2420*t2430*t2443*var3[48] - 5.*t1908*t2230*t2405*var3[58];
  p_output1[89]=5.*t1340*t1887*t2438*t3604*var3[8] + 20.*t1340*t1887*t2334*t3560*t3587*var3[18] - 5.*t1340*t1887*t2438*t3604*var3[18] + 30.*t1340*t1887*t2448*t2451*t2484*var3[28] - 20.*t1340*t1887*t2334*t3560*t3587*var3[28] + 20.*t1340*t1887*t2420*t2430*t2443*var3[38] - 30.*t1340*t1887*t2448*t2451*t2484*var3[38] + 5.*t1340*t1887*t2230*t2405*var3[48] - 20.*t1340*t1887*t2420*t2430*t2443*var3[48] - 5.*t1340*t1887*t2230*t2405*var3[58];
  p_output1[90]=1.;
  p_output1[91]=t3648;
  p_output1[92]=t3652;
  p_output1[93]=t3660;
  p_output1[94]=t3664;
  p_output1[95]=t3668;
  p_output1[96]=t3676;
  p_output1[97]=-5.*t2334*t3560*t3604*var3[8] - 20.*t2448*t2451*t3587*var3[18] + 5.*t2334*t3560*t3604*var3[18] - 30.*t2420*t2430*t2484*var3[28] + 20.*t2448*t2451*t3587*var3[28] - 20.*t2230*t2405*t2443*var3[38] + 30.*t2420*t2430*t2484*var3[38] + 20.*t2230*t2405*t2443*var3[48] - 5.*t3672*t3677*var3[48] + 5.*t3672*t3677*var3[58];
  p_output1[98]=-5.*t3604*t3758*var3[8] + 5.*t2438*t3604*var3[18] - 5.*t2334*t3560*t3604*var3[18] - 20.*t2334*t2438*t3587*t3758*var3[18] - 20.*t2448*t2451*t3587*var3[28] + 20.*t2334*t3560*t3587*var3[28] - 30.*t2451*t2484*t3560*t3758*var3[28] - 30.*t2420*t2430*t2484*var3[38] + 30.*t2448*t2451*t2484*var3[38] - 20.*t2430*t2443*t2448*t3758*var3[38] - 20.*t2230*t2405*t2443*var3[48] + 20.*t2420*t2430*t2443*var3[48] - 5.*t2405*t2420*t3758*var3[48] + 5.*t2230*t2405*var3[58] - 5.*t3672*t3677*var3[58];
  p_output1[99]=5.*t1908*t2438*t3604*var3[9] + 20.*t1908*t2334*t3560*t3587*var3[19] - 5.*t1908*t2438*t3604*var3[19] + 30.*t1908*t2448*t2451*t2484*var3[29] - 20.*t1908*t2334*t3560*t3587*var3[29] + 20.*t1908*t2420*t2430*t2443*var3[39] - 30.*t1908*t2448*t2451*t2484*var3[39] + 5.*t1908*t2230*t2405*var3[49] - 20.*t1908*t2420*t2430*t2443*var3[49] - 5.*t1908*t2230*t2405*var3[59];
  p_output1[100]=5.*t1340*t1887*t2438*t3604*var3[9] + 20.*t1340*t1887*t2334*t3560*t3587*var3[19] - 5.*t1340*t1887*t2438*t3604*var3[19] + 30.*t1340*t1887*t2448*t2451*t2484*var3[29] - 20.*t1340*t1887*t2334*t3560*t3587*var3[29] + 20.*t1340*t1887*t2420*t2430*t2443*var3[39] - 30.*t1340*t1887*t2448*t2451*t2484*var3[39] + 5.*t1340*t1887*t2230*t2405*var3[49] - 20.*t1340*t1887*t2420*t2430*t2443*var3[49] - 5.*t1340*t1887*t2230*t2405*var3[59];
  p_output1[101]=1.;
  p_output1[102]=t3648;
  p_output1[103]=t3652;
  p_output1[104]=t3660;
  p_output1[105]=t3664;
  p_output1[106]=t3668;
  p_output1[107]=t3676;
  p_output1[108]=-5.*t2334*t3560*t3604*var3[9] - 20.*t2448*t2451*t3587*var3[19] + 5.*t2334*t3560*t3604*var3[19] - 30.*t2420*t2430*t2484*var3[29] + 20.*t2448*t2451*t3587*var3[29] - 20.*t2230*t2405*t2443*var3[39] + 30.*t2420*t2430*t2484*var3[39] + 20.*t2230*t2405*t2443*var3[49] - 5.*t3672*t3677*var3[49] + 5.*t3672*t3677*var3[59];
  p_output1[109]=-5.*t3604*t3758*var3[9] + 5.*t2438*t3604*var3[19] - 5.*t2334*t3560*t3604*var3[19] - 20.*t2334*t2438*t3587*t3758*var3[19] - 20.*t2448*t2451*t3587*var3[29] + 20.*t2334*t3560*t3587*var3[29] - 30.*t2451*t2484*t3560*t3758*var3[29] - 30.*t2420*t2430*t2484*var3[39] + 30.*t2448*t2451*t2484*var3[39] - 20.*t2430*t2443*t2448*t3758*var3[39] - 20.*t2230*t2405*t2443*var3[49] + 20.*t2420*t2430*t2443*var3[49] - 5.*t2405*t2420*t3758*var3[49] + 5.*t2230*t2405*var3[59] - 5.*t3672*t3677*var3[59];
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

  double *var1,*var2,*var3,*var4,*var5,*var6;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 6)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "Six input(s) required (var1,var2,var3,var4,var5,var6).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }
  mrows = mxGetM(prhs[1]);
  ncols = mxGetN(prhs[1]);
  if( !mxIsDouble(prhs[1]) || mxIsComplex(prhs[1]) ||
    ( !(mrows == 22 && ncols == 1) && 
      !(mrows == 1 && ncols == 22))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var2 is wrong.");
    }
  mrows = mxGetM(prhs[2]);
  ncols = mxGetN(prhs[2]);
  if( !mxIsDouble(prhs[2]) || mxIsComplex(prhs[2]) ||
    ( !(mrows == 60 && ncols == 1) && 
      !(mrows == 1 && ncols == 60))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var3 is wrong.");
    }
  mrows = mxGetM(prhs[3]);
  ncols = mxGetN(prhs[3]);
  if( !mxIsDouble(prhs[3]) || mxIsComplex(prhs[3]) ||
    ( !(mrows == 2 && ncols == 1) && 
      !(mrows == 1 && ncols == 2))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var4 is wrong.");
    }
  mrows = mxGetM(prhs[4]);
  ncols = mxGetN(prhs[4]);
  if( !mxIsDouble(prhs[4]) || mxIsComplex(prhs[4]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var5 is wrong.");
    }
  mrows = mxGetM(prhs[5]);
  ncols = mxGetN(prhs[5]);
  if( !mxIsDouble(prhs[5]) || mxIsComplex(prhs[5]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var6 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
  var2 = mxGetPr(prhs[1]);
  var3 = mxGetPr(prhs[2]);
  var4 = mxGetPr(prhs[3]);
  var5 = mxGetPr(prhs[4]);
  var6 = mxGetPr(prhs[5]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 110, (mwSize) 1, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1,var2,var3,var4,var5,var6);


}

#else // MATLAB_MEX_FILE

#include "J_y_time_RightStance.hh"

namespace Pattern[Cassie, Blank[oneStep]]
{

void J_y_time_RightStance_raw(double *p_output1, const double *var1,const double *var2,const double *var3,const double *var4,const double *var5,const double *var6)
{
  // Call Subroutines
  output1(p_output1, var1, var2, var3, var4, var5, var6);

}

}

#endif // MATLAB_MEX_FILE
