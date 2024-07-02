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