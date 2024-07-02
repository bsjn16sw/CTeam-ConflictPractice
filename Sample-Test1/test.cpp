#include "pch.h"
#include "../CTeam-ConflictPractice/Cal.cpp"

TEST(TestCaseName, DivideTest) {
	Cal cal =  Cal();
	int result = cal.getDivide(3, 2);
	int expected = 1;
	EXPECT_EQ(expected, result);
}
