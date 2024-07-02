#include "pch.h"
#include "../CTeam-ConflictPractice/Cal.cpp"


TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(TestCaseName, test_getGop) {
	Cal cal;
	EXPECT_EQ(10, cal.getGop(2, 5));
}

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



