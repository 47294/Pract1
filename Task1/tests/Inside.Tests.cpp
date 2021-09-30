 extern "C"{}
#include "../include/Inside.h"

#include <gtest/gtest.h>
TEST (CircleC, 2and2and6){
	ASSERT_DOUBLE_EQ(inside(2, 2, 6), 1);
}
TEST (CircleC, 3and3and6){
	ASSERT_DOUBLE_EQ(inside(3, 3, 6), 1);
}
TEST (CircleC, minus2andminus2and9){
	ASSERT_DOUBLE_EQ(inside(-2, -2, 9), 1);
}


