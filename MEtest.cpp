// Test framework for multi-currency example
#include "gtest/gtest.h"

#include "Dollar.h"

TEST(MoneyTest, Multiplication) {
  Dollar five(5);
  five.times(2);
  EXPECT_EQ(10, five.amount);
}

