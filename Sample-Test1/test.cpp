#include "pch.h"
#include "../CTeam-ConflictPractice/Cal.cpp"

TEST(CalTestSuite, CalTest1) {
	// Arrange
	Cal c;
	int a = 3;
	int b = 5;

	// Action
	int ret = c.getSum(a, b);

	// Assert
	EXPECT_EQ(ret, 8);
}

TEST(TestCaseName, MinusTest) {
	Cal calc;
	EXPECT_EQ(calc.getMinus(5, 3), 2);
}

TEST(CalClassTestCase, getSumSumTest) {
	Cal c;

	EXPECT_EQ(c.getSumSum(1, 2, 3), 6);
	EXPECT_EQ(c.getSumSum(-1, -2, -3), -6);
}


