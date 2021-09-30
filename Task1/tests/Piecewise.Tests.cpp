 extern "C"{}
#include "../include/Piecewise.h"

#include <gtest/gtest.h>
TEST (TestOfFunc, out){
	ASSERT_DOUBLE_EQ(f(100, 10),0);
}
TEST (TestOfFunc, minus4){
	ASSERT_DOUBLE_EQ(f(-4,4),-4);
}
TEST (TestOfFunc, minus2e5){
	ASSERT_DOUBLE_EQ(f(-2.5,4),4);
}
TEST (TestOfFunc, minus1and1e5){
	ASSERT_DOUBLE_EQ(f(-1,4),1);
	ASSERT_DOUBLE_EQ(f(1.5,4),2.25);
}
TEST (TestOfFunc, plus3){
	ASSERT_DOUBLE_EQ(f(3,10), 5);
}
