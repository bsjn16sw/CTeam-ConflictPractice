#include "pch.h"
#include "../CTeam-ConflictPractice/Cal.cpp"

TEST(TestCaseName, MinusTest) {
	Cal calc;
	EXPECT_EQ(calc.getMinus(5, 3), 2);
}