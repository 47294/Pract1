extern "C"{}
#include "../include/Logic.h"

#include <gtest/gtest.h>

TEST (LogicTest, 000) {	
	ASSERT_DOUBLE_EQ(result(0, 0, 0),1);
}
TEST (LogicTest, 001) {	
	ASSERT_DOUBLE_EQ(result(0, 0, 1),1);
}
TEST (LogicTest, 010) {	
	ASSERT_DOUBLE_EQ(result(0, 1, 0),1);
}
TEST (LogicTest, 011) {	
	ASSERT_DOUBLE_EQ(result(0, 1, 1),1);
}
TEST (LogicTest, 100) {	
	ASSERT_DOUBLE_EQ(result(1, 0, 0),1);
}
TEST (LogicTest, 101) {	
	ASSERT_DOUBLE_EQ(result(1, 0, 1),1);
}
TEST (LogicTest, 110) {	
	ASSERT_DOUBLE_EQ(result(1, 1, 0),1);
}
TEST (LogicTest, 111) {	
	ASSERT_DOUBLE_EQ(result(1, 1, 1),1);
}
