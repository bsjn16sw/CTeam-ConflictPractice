#include "pch.h"
#include "../CTeam-ConflictPractice/Cal.cpp"

TEST(CalTest, zegoptest) {
	Cal cal;
  EXPECT_EQ(cal.getZegop(2), 4);
  EXPECT_TRUE(true);
}