#include "../include/Piecewise.h"
#include <math.h>
double f(double x, double R){
	if (x > 4 or x < -7){
		return 0;
	}
	if (x >= -7 and x < -3){
		return (R / 4) * x;
	}
	if (x >= -3 and x < -2){
		return R;
	}
	if (x >= -2 and x <= 0){
		return pow(x * (-1), log(R)/log(2));
	}
	if (x > 0 and x <= 2){
		return pow(x, log(R)/log(2));
	}
	if (x > 2 and x <= 4) {
		return R - (R / 2) * (x - 2);
	}
	
}	
