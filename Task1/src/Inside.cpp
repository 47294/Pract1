#include "../include/Inside.h"
#include <math.h>

double inside(double x, double y, double R){
	if (x < 0 and x > (-1) * R and y > (-1) * R and y < 0){
		if (pow(x, 2) + pow(y, 2) <= pow(R, 2)) {
			return 1;
		}
		else {
			return 0;
		}
	}
	else if (x > 0 and x < R and y > 0 and y < R){
		if ((pow(x - 1 , 4) + pow(x, 2) <= pow (R, 2)) and (pow(y, 2) + pow(sqrt(y)+1,2) <= pow(R, 2))){
			return 1;
		} else{
			return 0;
			}
		
	}
	else{
		return 0;
	}
}
