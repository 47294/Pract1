extern "C"{}
#include "../include/Logic.h"

#include <gtest/gtest.h>
int c = 0;
for (int i = 0; i<=1;i++){
	for (int j = 0; j<=1; j++){
		for (int k = 0; k<=1; k++){
			c=c+1;
			TEST (LogicTest, c){	
				ASSERT_DOUBLE_EQ(result(i, j, k),1);
			}
		}
	}
}
