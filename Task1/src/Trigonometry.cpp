#include "../include/Trigonometry.h"
#include <math.h>
#include <stdio.h>
double z1(double a, double b){
	return pow((cos (a) - cos (b)), 2) - pow((sin (a) - sin (b)), 2);
}
double z2(double a, double b){
	return -4 * pow(sin ((a - b) / 2), 2) * cos (a + b);
}
double result(double a, double b){
	if (round(z1(a, b)*100)/100 == round(z2(a, b)*100)/100) {
		return 1;
	}
	else{
		return 0;
	}
}
