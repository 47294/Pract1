extern "C"{
#include "../include/Trigonometry.h"
}
#include <gtest/gtest.h>
TEST (TestNaRavenstvo, 30i60){
	ASSERT_DOUBLE_EQ(result(30,60),1);
}
