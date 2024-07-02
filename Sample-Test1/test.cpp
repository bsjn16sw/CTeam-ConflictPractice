#include "pch.h"
#include "../CTeam-ConflictPractice/Cal.cpp"

TEST(TestCaseName, TestName) {
  EXPECT_EQ(1, 1);
  EXPECT_TRUE(true);
}

TEST(CalClassTestCase, getSumSumTest) {
	Cal c;

	EXPECT_EQ(c.getSumSum(1, 2, 3), 6);
	EXPECT_EQ(c.getSumSum(-1, -2, -3), -6);
}