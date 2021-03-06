extern "C"{}
#include "../include/Trigonometry.h"

#include <gtest/gtest.h>
TEST (EqualityTestOfTrigFunc, 3e20AND120e5){
	ASSERT_DOUBLE_EQ(result(3.2, 120.5),1);
}
TEST (EqualityTestOfTrigFunc, 30i60){
	ASSERT_DOUBLE_EQ(result(30, 60),1);
}
TEST (EqualityTestOfTrigFunc, minus20e33333333and195e412){
	ASSERT_DOUBLE_EQ(result(-20.3333333, 195.412),1);
}
