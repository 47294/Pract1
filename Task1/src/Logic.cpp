#include "../include/Logic.h"

int f(int a, int b, int c){
	return a and (!b or c);
}
int g(int a, int b, int c){
	return a and !b or c and a;
}
int result(int a, int b, int c){
	if (f(a, b, c) == g(a, b, c)) {
		return 1;
	}
	else {
		return 0;
	}
}
