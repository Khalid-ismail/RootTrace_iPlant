#include "StdAfx.h"
#include "ZTable.h"

CZTable::CZTable(void)
{

	
}

double CZTable::probBetweenScores( double z1, double z2) {
			double p1 = lookupZScore(abs(z1));
			double p2 = lookupZScore(abs(z2));

			double prob = -1;
			
			if (z1*z2 > 0 ) prob = abs(p1-p2); // area under curve between bounds.  Take account of sign of z scores
			else prob = abs(p1+p2); 

			return prob;

}

double CZTable::lookupZScore(double z) {

	//from here, http://www.intmath.com/Counting-probability/z-table.php but is this what I'm looking for?

	double prob = -1;

	if (z>=3){
		if (z>=3.89) prob	=	0.4999;
		else if (z>=3.88) prob = 	0.4999;
		else if (z>=3.87) prob =	0.4999;
		else if (z>=3.86) prob =	0.4999;
		else if (z>=3.85) prob =	0.4999;
		else if (z>=3.84) prob =	0.4999;
		else if (z>=3.83) prob =	0.4999;
		else if (z>=3.82) prob =	0.4999;
		else if (z>=3.81) prob =	0.4999;
		else if (z>=3.8)  prob =	0.4999;
		else if (z>=3.79) prob =	0.4999;
		else if (z>=3.78) prob =	0.4999;
		else if (z>=3.77) prob =	0.4999;
		else if (z>=3.76) prob =	0.4999;
		else if (z>=3.75) prob =	0.4999;
		else if (z>=3.74) prob =	0.4999;
		else if (z>=3.73) prob =	0.4999;
		else if (z>=3.72) prob =	0.4999;
		else if (z>=3.71) prob =	0.4999;
		else if (z>=3.7) prob =	0.4999;
		else if (z>=3.69) prob =	0.4999;
		else if (z>=3.68) prob =	0.4999;
		else if (z>=3.67) prob =	0.4999;
		else if (z>=3.66) prob =	0.4999;
		else if (z>=3.65) prob =	0.4999;
		else if (z>=3.64) prob =	0.4999;
		else if (z>=3.63) prob =	0.4999;
		else if (z>=3.62) prob =	0.4999;
		else if (z>=3.61) prob =	0.4998;
		else if (z>=3.6) prob =	0.4998;
		else if (z>=3.59) prob =	0.4998;
		else if (z>=3.58) prob =	0.4998;
		else if (z>=3.57) prob =	0.4998;
		else if (z>=3.56) prob =	0.4998;
		else if (z>=3.55) prob =	0.4998;
		else if (z>=3.54) prob =	0.4998;
		else if (z>=3.53) prob =	0.4998;
		else if (z>=3.52) prob =	0.4998;
		else if (z>=3.51) prob =	0.4998;
		else if (z>=3.5) prob =	0.4998;
		else if (z>=3.49) prob =	0.4998;
		else if (z>=3.48) prob =	0.4997;
		else if (z>=3.47) prob =	0.4997;
		else if (z>=3.46) prob =	0.4997;
		else if (z>=3.45) prob =	0.4997;
		else if (z>=3.44) prob =	0.4997;
		else if (z>=3.43) prob =	0.4997;
		else if (z>=3.42) prob =	0.4997;
		else if (z>=3.41) prob =	0.4997;
		else if (z>=3.4) prob =	0.4997;
		else if (z>=3.39) prob =	0.4997;
		else if (z>=3.38) prob =	0.4996;
		else if (z>=3.37) prob =	0.4996;
		else if (z>=3.36) prob =	0.4996;
		else if (z>=3.35) prob =	0.4996;
		else if (z>=3.34) prob =	0.4996;
		else if (z>=3.33) prob =	0.4996;
		else if (z>=3.32) prob =	0.4995;
		else if (z>=3.31) prob =	0.4995;
		else if (z>=3.3) prob =	0.4995;
		else if (z>=3.29) prob =	0.4995;
		else if (z>=3.28) prob =	0.4995;
		else if (z>=3.27) prob =	0.4995;
		else if (z>=3.26) prob =	0.4994;
		else if (z>=3.25) prob =	0.4994;
		else if (z>=3.24) prob =	0.4994;
		else if (z>=3.23) prob =	0.4994;
		else if (z>=3.22) prob =	0.4994;
		else if (z>=3.21) prob =	0.4993;
		else if (z>=3.2) prob =	0.4993;
		else if (z>=3.19) prob =	0.4993;
		else if (z>=3.18) prob =	0.4993;
		else if (z>=3.17) prob =	0.4992;
		else if (z>=3.16) prob =	0.4992;
		else if (z>=3.15) prob =	0.4992;
		else if (z>=3.14) prob =	0.4992;
		else if (z>=3.13) prob =	0.4991;
		else if (z>=3.12) prob =	0.4991;
		else if (z>=3.11) prob =	0.4991;
		else if (z>=3.1) prob =	0.499;
		else if (z>=3.09) prob =	0.499;
		else if (z>=3.08) prob =	0.499;
		else if (z>=3.07) prob =	0.4989;
		else if (z>=3.06) prob =	0.4989;
		else if (z>=3.05) prob =	0.4989;
		else if (z>=3.04) prob =	0.4988;
		else if (z>=3.03) prob =	0.4988;
		else if (z>=3.02) prob =	0.4987;
		else if (z>=3.01) prob =	0.4987;
		else if (z>=3) prob =	0.4987;
	} 
	else if (z>=2) {
		if (z>=2.99) prob =	0.4986;
		else if (z>=2.98) prob =	0.4986;
		else if (z>=2.97) prob =	0.4985;
		else if (z>=2.96) prob =	0.4985;
		else if (z>=2.95) prob =	0.4984;
		else if (z>=2.94) prob =	0.4984;
		else if (z>=2.93) prob =	0.4983;
		else if (z>=2.92) prob =	0.4982;
		else if (z>=2.91) prob =	0.4982;
		else if (z>=2.9) prob =	0.4981;
		else if (z>=2.89) prob =	0.4981;
		else if (z>=2.88) prob =	0.498;
		else if (z>=2.87) prob =	0.4979;
		else if (z>=2.86) prob =	0.4979;
		else if (z>=2.85) prob =	0.4978;
		else if (z>=2.84) prob =	0.4977;
		else if (z>=2.83) prob =	0.4977;
		else if (z>=2.82) prob =	0.4976;
		else if (z>=2.81) prob =	0.4975;
		else if (z>=2.8) prob =	0.4974;
		else if (z>=2.79) prob =	0.4974;
		else if (z>=2.78) prob =	0.4973;
		else if (z>=2.77) prob =	0.4972;
		else if (z>=2.76) prob =	0.4971;
		else if (z>=2.75) prob =	0.497;
		else if (z>=2.74) prob =	0.4969;
		else if (z>=2.73) prob =	0.4968;
		else if (z>=2.72) prob =	0.4967;
		else if (z>=2.71) prob =	0.4966;
		else if (z>=2.7) prob =	0.4965;
		else if (z>=2.69) prob =	0.4964;
		else if (z>=2.68) prob =	0.4963;
		else if (z>=2.67) prob =	0.4962;
		else if (z>=2.66) prob =	0.4961;
		else if (z>=2.65) prob =	0.496;
		else if (z>=2.64) prob =	0.4959;
		else if (z>=2.63) prob =	0.4957;
		else if (z>=2.62) prob =	0.4956;
		else if (z>=2.61) prob =	0.4955;
		else if (z>=2.6) prob =	0.4953;
		else if (z>=2.59) prob =	0.4952;
		else if (z>=2.58) prob =	0.4951;
		else if (z>=2.57) prob =	0.4949;
		else if (z>=2.56) prob =	0.4948;
		else if (z>=2.55) prob =	0.4946;
		else if (z>=2.54) prob =	0.4945;
		else if (z>=2.53) prob =	0.4943;
		else if (z>=2.52) prob =	0.4941;
		else if (z>=2.51) prob =	0.494;
		else if (z>=2.5) prob =	0.4938;
		else if (z>=2.49) prob =	0.4936;
		else if (z>=2.48) prob =	0.4934;
		else if (z>=2.47) prob =	0.4932;
		else if (z>=2.46) prob =	0.4931;
		else if (z>=2.45) prob =	0.4929;
		else if (z>=2.44) prob =	0.4927;
		else if (z>=2.43) prob =	0.4925;
		else if (z>=2.42) prob =	0.4922;
		else if (z>=2.41) prob =	0.492;
		else if (z>=2.4) prob =	0.4918;
		else if (z>=2.39) prob =	0.4916;
		else if (z>=2.38) prob =	0.4913;
		else if (z>=2.37) prob =	0.4911;
		else if (z>=2.36) prob =	0.4909;
		else if (z>=2.35) prob =	0.4906;
		else if (z>=2.34) prob =	0.4904;
		else if (z>=2.33) prob =	0.4901;
		else if (z>=2.32) prob =	0.4898;
		else if (z>=2.31) prob =	0.4896;
		else if (z>=2.3) prob =	0.4893;
		else if (z>=2.29) prob =	0.489;
		else if (z>=2.28) prob =	0.4887;
		else if (z>=2.27) prob =	0.4884;
		else if (z>=2.26) prob =	0.4881;
		else if (z>=2.25) prob =	0.4878;
		else if (z>=2.24) prob =	0.4875;
		else if (z>=2.23) prob =	0.4871;
		else if (z>=2.22) prob =	0.4868;
		else if (z>=2.21) prob =	0.4864;
		else if (z>=2.2) prob =	0.4861;
		else if (z>=2.19) prob =	0.4857;
		else if (z>=2.18) prob =	0.4854;
		else if (z>=2.17) prob =	0.485;
		else if (z>=2.16) prob =	0.4846;
		else if (z>=2.15) prob =	0.4842;
		else if (z>=2.14) prob =	0.4838;
		else if (z>=2.13) prob =	0.4834;
		else if (z>=2.12) prob =	0.483;
		else if (z>=2.11) prob =	0.4826;
		else if (z>=2.1) prob =	0.4821;
		else if (z>=2.09) prob =	0.4817;
		else if (z>=2.08) prob =	0.4812;
		else if (z>=2.07) prob =	0.4808;
		else if (z>=2.06) prob =	0.4803;
		else if (z>=2.05) prob =	0.4798;
		else if (z>=2.04) prob =	0.4793;
		else if (z>=2.03) prob =	0.4788;
		else if (z>=2.02) prob =	0.4783;
		else if (z>=2.01) prob =	0.4778;
		else if (z>=2) prob =	0.4772;
		} 
		else if (z>=1) {
			if (z>=1.99) prob =	0.4767;
			else if (z>=1.98) prob =	0.4761;
			else if (z>=1.97) prob =	0.4756;
			else if (z>=1.96) prob =	0.475;
			else if (z>=1.95) prob =	0.4744;
			else if (z>=1.94) prob =	0.4738;
			else if (z>=1.93) prob =	0.4732;
			else if (z>=1.92) prob =	0.4726;
			else if (z>=1.91) prob =	0.4719;
			else if (z>=1.9) prob =	0.4713;
			else if (z>=1.89) prob =	0.4706;
			else if (z>=1.88) prob =	0.4699;
			else if (z>=1.87) prob =	0.4693;
			else if (z>=1.86) prob =	0.4686;
			else if (z>=1.85) prob =	0.4678;
			else if (z>=1.84) prob =	0.4671;
			else if (z>=1.83) prob =	0.4664;
			else if (z>=1.82) prob =	0.4656;
			else if (z>=1.81) prob =	0.4649;
			else if (z>=1.8) prob =	0.4641;
			else if (z>=1.79) prob =	0.4633;
			else if (z>=1.78) prob =	0.4625;
			else if (z>=1.77) prob =	0.4616;
			else if (z>=1.76) prob =	0.4608;
			else if (z>=1.75) prob =	0.4599;
			else if (z>=1.74) prob =	0.4591;
			else if (z>=1.73) prob =	0.4582;
			else if (z>=1.72) prob =	0.4573;
			else if (z>=1.71) prob =	0.4564;
			else if (z>=1.7) prob =	0.4554;
			else if (z>=1.69) prob =	0.4545;
			else if (z>=1.68) prob =	0.4535;
			else if (z>=1.67) prob =	0.4525;
			else if (z>=1.66) prob =	0.4515;
			else if (z>=1.65) prob =	0.4505;
			else if (z>=1.64) prob =	0.4495;
			else if (z>=1.63) prob =	0.4484;
			else if (z>=1.62) prob =	0.4474;
			else if (z>=1.61) prob =	0.4463;
			else if (z>=1.6) prob =	0.4452;
			else if (z>=1.59) prob =	0.4441;
			else if (z>=1.58) prob =	0.4429;
			else if (z>=1.57) prob =	0.4418;
			else if (z>=1.56) prob =	0.4406;
			else if (z>=1.55) prob =	0.4394;
			else if (z>=1.54) prob =	0.4382;
			else if (z>=1.53) prob =	0.437;
			else if (z>=1.52) prob =	0.4357;
			else if (z>=1.51) prob =	0.4345;
			else if (z>=1.5) prob =	0.4332;
			else if (z>=1.49) prob =	0.4319;
			else if (z>=1.48) prob =	0.4306;
			else if (z>=1.47) prob =	0.4292;
			else if (z>=1.46) prob =	0.4279;
			else if (z>=1.45) prob =	0.4265;
			else if (z>=1.44) prob =	0.4251;
			else if (z>=1.43) prob =	0.4236;
			else if (z>=1.42) prob =	0.4222;
			else if (z>=1.41) prob =	0.4207;
			else if (z>=1.4) prob =	0.4192;
			else if (z>=1.39) prob =	0.4177;
			else if (z>=1.38) prob =	0.4162;
			else if (z>=1.37) prob =	0.4147;
			else if (z>=1.36) prob =	0.4131;
			else if (z>=1.35) prob =	0.4115;
			else if (z>=1.34) prob =	0.4099;
			else if (z>=1.33) prob =	0.4082;
			else if (z>=1.32) prob =	0.4066;
			else if (z>=1.31) prob =	0.4049;
			else if (z>=1.3) prob =	0.4032;
			else if (z>=1.29) prob =	0.4015;
			else if (z>=1.28) prob =	0.3997;
			else if (z>=1.27) prob =	0.398;
			else if (z>=1.26) prob =	0.3962;
			else if (z>=1.25) prob =	0.3944;
			else if (z>=1.24) prob =	0.3925;
			else if (z>=1.23) prob =	0.3907;
			else if (z>=1.22) prob =	0.3888;
			else if (z>=1.21) prob =	0.3869;
			else if (z>=1.2) prob =	0.3849;
			else if (z>=1.19) prob =	0.383;
			else if (z>=1.18) prob =	0.381;
			else if (z>=1.17) prob =	0.379;
			else if (z>=1.16) prob =	0.377;
			else if (z>=1.15) prob =	0.3749;
			else if (z>=1.14) prob =	0.3729;
			else if (z>=1.13) prob =	0.3708;
			else if (z>=1.12) prob =	0.3686;
			else if (z>=1.11) prob =	0.3665;
			else if (z>=1.1) prob =	0.3643;
			else if (z>=1.09) prob =	0.3621;
			else if (z>=1.08) prob =	0.3599;
			else if (z>=1.07) prob =	0.3577;
			else if (z>=1.06) prob =	0.3554;
			else if (z>=1.05) prob =	0.3531;
			else if (z>=1.04) prob =	0.3508;
			else if (z>=1.03) prob =	0.3485;
			else if (z>=1.02) prob =	0.3461;
			else if (z>=1.01) prob =	0.3438;
			else if (z>=1) prob =	0.3413;
		}
		else {
			if (z>=0.99) prob =	0.3389;
			else if (z>=0.98) prob =	0.3365;
			else if (z>=0.97) prob =	0.3304;
			else if (z>=0.96) prob =	0.3315;
			else if (z>=0.95) prob =	0.3289;
			else if (z>=0.94) prob =	0.3264;
			else if (z>=0.93) prob =	0.3238;
			else if (z>=0.92) prob =	0.3212;
			else if (z>=0.91) prob =	0.3186;
			else if (z>=0.9) prob =	0.3159;
			else if (z>=0.89) prob =	0.3133;
			else if (z>=0.88) prob =	0.3106;
			else if (z>=0.87) prob =	0.3078;
			else if (z>=0.86) prob =	0.3051;
			else if (z>=0.85) prob =	0.3023;
			else if (z>=0.84) prob =	0.2995;
			else if (z>=0.83) prob =	0.2967;
			else if (z>=0.82) prob =	0.2939;
			else if (z>=0.81) prob =	0.291;
			else if (z>=0.8) prob =	0.2881;
			else if (z>=0.79) prob =	0.2852;
			else if (z>=0.78) prob =	0.2823;
			else if (z>=0.77) prob =	0.2794;
			else if (z>=0.76) prob =	0.2764;
			else if (z>=0.75) prob =	0.2734;
			else if (z>=0.74) prob =	0.2704;
			else if (z>=0.73) prob =	0.2673;
			else if (z>=0.72) prob =	0.2642;
			else if (z>=0.71) prob =	0.2611;
			else if (z>=0.7) prob =	0.258;
			else if (z>=0.69) prob =	0.2549;
			else if (z>=0.68) prob =	0.2517;
			else if (z>=0.67) prob =	0.2486;
			else if (z>=0.66) prob =	0.2454;
			else if (z>=0.65) prob =	0.2422;
			else if (z>=0.64) prob =	0.2389;
			else if (z>=0.63) prob =	0.2357;
			else if (z>=0.62) prob =	0.2324;
			else if (z>=0.61) prob =	0.2291;
			else if (z>=0.6) prob =	0.2257;
			else if (z>=0.59) prob =	0.2224;
			else if (z>=0.58) prob =	0.219;
			else if (z>=0.57) prob =	0.2157;
			else if (z>=0.56) prob =	0.2123;
			else if (z>=0.55) prob =	0.2088;
			else if (z>=0.54) prob =	0.2054;
			else if (z>=0.53) prob =	0.2019;
			else if (z>=0.52) prob =	0.1985;
			else if (z>=0.51) prob =	0.195;
			else if (z>=0.5) prob =	0.1915;
			else if (z>=0.49) prob =	0.1879;
			else if (z>=0.48) prob =	0.1844;
			else if (z>=0.47) prob =	0.1808;
			else if (z>=0.46) prob =	0.1772;
			else if (z>=0.45) prob =	0.1736;
			else if (z>=0.44) prob =	0.17;
			else if (z>=0.43) prob =	0.1664;
			else if (z>=0.42) prob =	0.1628;
			else if (z>=0.41) prob =	0.1591;
			else if (z>=0.4) prob =	0.1554;
			else if (z>=0.39) prob =	0.1517;
			else if (z>=0.38) prob =	0.148;
			else if (z>=0.37) prob =	0.1443;
			else if (z>=0.36) prob =	0.1406;
			else if (z>=0.35) prob =	0.1368;
			else if (z>=0.34) prob =	0.1331;
			else if (z>=0.33) prob =	0.1293;
			else if (z>=0.32) prob =	0.1255;
			else if (z>=0.31) prob =	0.1217;
			else if (z>=0.3) prob =	0.1179;
			else if (z>=0.29) prob =	0.1141;
			else if (z>=0.28) prob =	0.1103;
			else if (z>=0.27) prob =	0.1064;
			else if (z>=0.26) prob =	0.1026;
			else if (z>=0.25) prob =	0.0987;
			else if (z>=0.24) prob =	0.0948;
			else if (z>=0.23) prob =	0.091;
			else if (z>=0.22) prob =	0.0871;
			else if (z>=0.21) prob =	0.0832;
			else if (z>=0.2) prob =	0.0793;
			else if (z>=0.19) prob =	0.0753;
			else if (z>=0.18) prob =	0.0714;
			else if (z>=0.17) prob =	0.0675;
			else if (z>=0.16) prob =	0.0636;
			else if (z>=0.15) prob =	0.0596;
			else if (z>=0.14) prob =	0.0557;
			else if (z>=0.13) prob =	0.0517;
			else if (z>=0.12) prob =	0.0478;
			else if (z>=0.11) prob =	0.0438;
			else if (z>=0.1) prob =	0.0398;
			else if (z>=0.09) prob =	0.0359;
			else if (z>=0.08) prob =	0.0319;
			else if (z>=0.07) prob =	0.0279;
			else if (z>=0.06) prob =	0.0239;
			else if (z>=0.05) prob =	0.0199;
			else if (z>=0.04) prob =	0.016;
			else if (z>=0.03) prob =	0.012;
			else if (z>=0.02) prob =	0.008;
			else if (z>=0.01) prob =	0.004;
			else if (z>=0) prob =	0;

		}

return prob;

}
