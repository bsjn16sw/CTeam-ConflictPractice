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
