/*
 * Automatically Generated from Mathematica.
 * Mon 12 Jun 2017 22:04:00 GMT-04:00
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
static void output1(double *p_output1,const double *var1)
{
  double _NotUsed;
  NULL;
  p_output1[0]=4;
  p_output1[1]=4;
  p_output1[2]=4;
  p_output1[3]=4;
  p_output1[4]=4;
  p_output1[5]=4;
  p_output1[6]=4;
  p_output1[7]=4;
  p_output1[8]=4;
  p_output1[9]=4;
  p_output1[10]=4;
  p_output1[11]=4;
  p_output1[12]=4;
  p_output1[13]=4;
  p_output1[14]=4;
  p_output1[15]=4;
  p_output1[16]=4;
  p_output1[17]=4;
  p_output1[18]=4;
  p_output1[19]=5;
  p_output1[20]=5;
  p_output1[21]=5;
  p_output1[22]=5;
  p_output1[23]=5;
  p_output1[24]=5;
  p_output1[25]=5;
  p_output1[26]=5;
  p_output1[27]=5;
  p_output1[28]=5;
  p_output1[29]=5;
  p_output1[30]=5;
  p_output1[31]=5;
  p_output1[32]=5;
  p_output1[33]=5;
  p_output1[34]=5;
  p_output1[35]=5;
  p_output1[36]=5;
  p_output1[37]=5;
  p_output1[38]=6;
  p_output1[39]=6;
  p_output1[40]=6;
  p_output1[41]=6;
  p_output1[42]=6;
  p_output1[43]=6;
  p_output1[44]=6;
  p_output1[45]=6;
  p_output1[46]=6;
  p_output1[47]=6;
  p_output1[48]=6;
  p_output1[49]=6;
  p_output1[50]=6;
  p_output1[51]=6;
  p_output1[52]=6;
  p_output1[53]=6;
  p_output1[54]=6;
  p_output1[55]=6;
  p_output1[56]=6;
  p_output1[57]=7;
  p_output1[58]=7;
  p_output1[59]=7;
  p_output1[60]=7;
  p_output1[61]=7;
  p_output1[62]=7;
  p_output1[63]=7;
  p_output1[64]=7;
  p_output1[65]=7;
  p_output1[66]=7;
  p_output1[67]=7;
  p_output1[68]=8;
  p_output1[69]=8;
  p_output1[70]=8;
  p_output1[71]=8;
  p_output1[72]=8;
  p_output1[73]=8;
  p_output1[74]=8;
  p_output1[75]=8;
  p_output1[76]=8;
  p_output1[77]=8;
  p_output1[78]=8;
  p_output1[79]=9;
  p_output1[80]=9;
  p_output1[81]=9;
  p_output1[82]=9;
  p_output1[83]=9;
  p_output1[84]=9;
  p_output1[85]=9;
  p_output1[86]=9;
  p_output1[87]=9;
  p_output1[88]=9;
  p_output1[89]=9;
  p_output1[90]=10;
  p_output1[91]=10;
  p_output1[92]=10;
  p_output1[93]=10;
  p_output1[94]=10;
  p_output1[95]=10;
  p_output1[96]=10;
  p_output1[97]=10;
  p_output1[98]=10;
  p_output1[99]=10;
  p_output1[100]=10;
  p_output1[101]=11;
  p_output1[102]=11;
  p_output1[103]=11;
  p_output1[104]=11;
  p_output1[105]=11;
  p_output1[106]=11;
  p_output1[107]=11;
  p_output1[108]=11;
  p_output1[109]=11;
  p_output1[110]=11;
  p_output1[111]=11;
  p_output1[112]=12;
  p_output1[113]=12;
  p_output1[114]=12;
  p_output1[115]=12;
  p_output1[116]=12;
  p_output1[117]=12;
  p_output1[118]=12;
  p_output1[119]=12;
  p_output1[120]=12;
  p_output1[121]=12;
  p_output1[122]=12;
  p_output1[123]=13;
  p_output1[124]=13;
  p_output1[125]=13;
  p_output1[126]=13;
  p_output1[127]=13;
  p_output1[128]=13;
  p_output1[129]=13;
  p_output1[130]=13;
  p_output1[131]=13;
  p_output1[132]=13;
  p_output1[133]=13;
  p_output1[134]=14;
  p_output1[135]=14;
  p_output1[136]=14;
  p_output1[137]=14;
  p_output1[138]=14;
  p_output1[139]=14;
  p_output1[140]=14;
  p_output1[141]=14;
  p_output1[142]=14;
  p_output1[143]=14;
  p_output1[144]=14;
  p_output1[145]=15;
  p_output1[146]=15;
  p_output1[147]=15;
  p_output1[148]=15;
  p_output1[149]=15;
  p_output1[150]=15;
  p_output1[151]=15;
  p_output1[152]=15;
  p_output1[153]=15;
  p_output1[154]=15;
  p_output1[155]=15;
  p_output1[156]=16;
  p_output1[157]=16;
  p_output1[158]=16;
  p_output1[159]=16;
  p_output1[160]=16;
  p_output1[161]=16;
  p_output1[162]=16;
  p_output1[163]=16;
  p_output1[164]=16;
  p_output1[165]=16;
  p_output1[166]=16;
  p_output1[167]=17;
  p_output1[168]=17;
  p_output1[169]=17;
  p_output1[170]=17;
  p_output1[171]=17;
  p_output1[172]=17;
  p_output1[173]=17;
  p_output1[174]=17;
  p_output1[175]=17;
  p_output1[176]=17;
  p_output1[177]=17;
  p_output1[178]=18;
  p_output1[179]=18;
  p_output1[180]=18;
  p_output1[181]=18;
  p_output1[182]=18;
  p_output1[183]=18;
  p_output1[184]=18;
  p_output1[185]=18;
  p_output1[186]=18;
  p_output1[187]=18;
  p_output1[188]=18;
  p_output1[189]=19;
  p_output1[190]=19;
  p_output1[191]=19;
  p_output1[192]=19;
  p_output1[193]=19;
  p_output1[194]=19;
  p_output1[195]=19;
  p_output1[196]=19;
  p_output1[197]=19;
  p_output1[198]=19;
  p_output1[199]=19;
  p_output1[200]=20;
  p_output1[201]=20;
  p_output1[202]=20;
  p_output1[203]=20;
  p_output1[204]=20;
  p_output1[205]=20;
  p_output1[206]=20;
  p_output1[207]=20;
  p_output1[208]=20;
  p_output1[209]=20;
  p_output1[210]=20;
  p_output1[211]=21;
  p_output1[212]=21;
  p_output1[213]=21;
  p_output1[214]=21;
  p_output1[215]=21;
  p_output1[216]=21;
  p_output1[217]=21;
  p_output1[218]=21;
  p_output1[219]=21;
  p_output1[220]=21;
  p_output1[221]=21;
  p_output1[222]=22;
  p_output1[223]=22;
  p_output1[224]=22;
  p_output1[225]=22;
  p_output1[226]=22;
  p_output1[227]=22;
  p_output1[228]=22;
  p_output1[229]=22;
  p_output1[230]=22;
  p_output1[231]=22;
  p_output1[232]=22;
  p_output1[233]=4;
  p_output1[234]=5;
  p_output1[235]=6;
  p_output1[236]=7;
  p_output1[237]=8;
  p_output1[238]=9;
  p_output1[239]=10;
  p_output1[240]=11;
  p_output1[241]=12;
  p_output1[242]=13;
  p_output1[243]=14;
  p_output1[244]=15;
  p_output1[245]=16;
  p_output1[246]=17;
  p_output1[247]=18;
  p_output1[248]=19;
  p_output1[249]=20;
  p_output1[250]=21;
  p_output1[251]=22;
  p_output1[252]=4;
  p_output1[253]=5;
  p_output1[254]=6;
  p_output1[255]=7;
  p_output1[256]=8;
  p_output1[257]=9;
  p_output1[258]=10;
  p_output1[259]=11;
  p_output1[260]=12;
  p_output1[261]=13;
  p_output1[262]=14;
  p_output1[263]=15;
  p_output1[264]=16;
  p_output1[265]=17;
  p_output1[266]=18;
  p_output1[267]=19;
  p_output1[268]=20;
  p_output1[269]=21;
  p_output1[270]=22;
  p_output1[271]=4;
  p_output1[272]=5;
  p_output1[273]=6;
  p_output1[274]=7;
  p_output1[275]=8;
  p_output1[276]=9;
  p_output1[277]=10;
  p_output1[278]=11;
  p_output1[279]=12;
  p_output1[280]=13;
  p_output1[281]=14;
  p_output1[282]=15;
  p_output1[283]=16;
  p_output1[284]=17;
  p_output1[285]=18;
  p_output1[286]=19;
  p_output1[287]=20;
  p_output1[288]=21;
  p_output1[289]=22;
  p_output1[290]=4;
  p_output1[291]=5;
  p_output1[292]=6;
  p_output1[293]=7;
  p_output1[294]=8;
  p_output1[295]=9;
  p_output1[296]=10;
  p_output1[297]=11;
  p_output1[298]=12;
  p_output1[299]=13;
  p_output1[300]=14;
  p_output1[301]=4;
  p_output1[302]=5;
  p_output1[303]=6;
  p_output1[304]=7;
  p_output1[305]=8;
  p_output1[306]=9;
  p_output1[307]=10;
  p_output1[308]=11;
  p_output1[309]=12;
  p_output1[310]=13;
  p_output1[311]=14;
  p_output1[312]=4;
  p_output1[313]=5;
  p_output1[314]=6;
  p_output1[315]=7;
  p_output1[316]=8;
  p_output1[317]=9;
  p_output1[318]=10;
  p_output1[319]=11;
  p_output1[320]=12;
  p_output1[321]=13;
  p_output1[322]=14;
  p_output1[323]=4;
  p_output1[324]=5;
  p_output1[325]=6;
  p_output1[326]=7;
  p_output1[327]=8;
  p_output1[328]=9;
  p_output1[329]=10;
  p_output1[330]=11;
  p_output1[331]=12;
  p_output1[332]=13;
  p_output1[333]=14;
  p_output1[334]=4;
  p_output1[335]=5;
  p_output1[336]=6;
  p_output1[337]=7;
  p_output1[338]=8;
  p_output1[339]=9;
  p_output1[340]=10;
  p_output1[341]=11;
  p_output1[342]=12;
  p_output1[343]=13;
  p_output1[344]=14;
  p_output1[345]=4;
  p_output1[346]=5;
  p_output1[347]=6;
  p_output1[348]=7;
  p_output1[349]=8;
  p_output1[350]=9;
  p_output1[351]=10;
  p_output1[352]=11;
  p_output1[353]=12;
  p_output1[354]=13;
  p_output1[355]=14;
  p_output1[356]=4;
  p_output1[357]=5;
  p_output1[358]=6;
  p_output1[359]=7;
  p_output1[360]=8;
  p_output1[361]=9;
  p_output1[362]=10;
  p_output1[363]=11;
  p_output1[364]=12;
  p_output1[365]=13;
  p_output1[366]=14;
  p_output1[367]=4;
  p_output1[368]=5;
  p_output1[369]=6;
  p_output1[370]=7;
  p_output1[371]=8;
  p_output1[372]=9;
  p_output1[373]=10;
  p_output1[374]=11;
  p_output1[375]=12;
  p_output1[376]=13;
  p_output1[377]=14;
  p_output1[378]=4;
  p_output1[379]=5;
  p_output1[380]=6;
  p_output1[381]=15;
  p_output1[382]=16;
  p_output1[383]=17;
  p_output1[384]=18;
  p_output1[385]=19;
  p_output1[386]=20;
  p_output1[387]=21;
  p_output1[388]=22;
  p_output1[389]=4;
  p_output1[390]=5;
  p_output1[391]=6;
  p_output1[392]=15;
  p_output1[393]=16;
  p_output1[394]=17;
  p_output1[395]=18;
  p_output1[396]=19;
  p_output1[397]=20;
  p_output1[398]=21;
  p_output1[399]=22;
  p_output1[400]=4;
  p_output1[401]=5;
  p_output1[402]=6;
  p_output1[403]=15;
  p_output1[404]=16;
  p_output1[405]=17;
  p_output1[406]=18;
  p_output1[407]=19;
  p_output1[408]=20;
  p_output1[409]=21;
  p_output1[410]=22;
  p_output1[411]=4;
  p_output1[412]=5;
  p_output1[413]=6;
  p_output1[414]=15;
  p_output1[415]=16;
  p_output1[416]=17;
  p_output1[417]=18;
  p_output1[418]=19;
  p_output1[419]=20;
  p_output1[420]=21;
  p_output1[421]=22;
  p_output1[422]=4;
  p_output1[423]=5;
  p_output1[424]=6;
  p_output1[425]=15;
  p_output1[426]=16;
  p_output1[427]=17;
  p_output1[428]=18;
  p_output1[429]=19;
  p_output1[430]=20;
  p_output1[431]=21;
  p_output1[432]=22;
  p_output1[433]=4;
  p_output1[434]=5;
  p_output1[435]=6;
  p_output1[436]=15;
  p_output1[437]=16;
  p_output1[438]=17;
  p_output1[439]=18;
  p_output1[440]=19;
  p_output1[441]=20;
  p_output1[442]=21;
  p_output1[443]=22;
  p_output1[444]=4;
  p_output1[445]=5;
  p_output1[446]=6;
  p_output1[447]=15;
  p_output1[448]=16;
  p_output1[449]=17;
  p_output1[450]=18;
  p_output1[451]=19;
  p_output1[452]=20;
  p_output1[453]=21;
  p_output1[454]=22;
  p_output1[455]=4;
  p_output1[456]=5;
  p_output1[457]=6;
  p_output1[458]=15;
  p_output1[459]=16;
  p_output1[460]=17;
  p_output1[461]=18;
  p_output1[462]=19;
  p_output1[463]=20;
  p_output1[464]=21;
  p_output1[465]=22;
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

  double *var1;
  double *p_output1;

  /*  Check for proper number of arguments.  */ 
  if( nrhs != 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:invalidNumInputs", "One input(s) required (var1).");
    }
  else if( nlhs > 1)
    {
      mexErrMsgIdAndTxt("MATLAB:MShaped:maxlhs", "Too many output arguments.");
    }

  /*  The input must be a noncomplex double vector or scaler.  */
  mrows = mxGetM(prhs[0]);
  ncols = mxGetN(prhs[0]);
  if( !mxIsDouble(prhs[0]) || mxIsComplex(prhs[0]) ||
    ( !(mrows == 1 && ncols == 1) && 
      !(mrows == 1 && ncols == 1))) 
    {
      mexErrMsgIdAndTxt( "MATLAB:MShaped:inputNotRealVector", "var1 is wrong.");
    }

  /*  Assign pointers to each input.  */
  var1 = mxGetPr(prhs[0]);
   


   
  /*  Create matrices for return arguments.  */
  plhs[0] = mxCreateDoubleMatrix((mwSize) 233, (mwSize) 2, mxREAL);
  p_output1 = mxGetPr(plhs[0]);


  /* Call the calculation subroutine. */
  output1(p_output1,var1);


}

#else // MATLAB_MEX_FILE

#include "Js_Ge_vec_cassie.hh"

namespace Times[2, step, Pattern[Cassie, Blank[]]]
{

void Js_Ge_vec_cassie_raw(double *p_output1, const double *var1)
{
  // Call Subroutines
  output1(p_output1, var1);

}

}

#endif // MATLAB_MEX_FILE
