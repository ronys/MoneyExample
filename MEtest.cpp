// Test framework for multi-currency example
#include "gtest/gtest.h"

#include "Dollar.h"
#include "Franc.h"

TEST(MoneyTest, Multiplication) {
  Dollar five(5);
  Dollar product = five.times(2);
  EXPECT_EQ(Dollar(10), product);
  product = five.times(3);
  EXPECT_EQ(Dollar(15), product);
}

TEST(MoneyTest, Equality) {
  EXPECT_EQ(Dollar(5), Dollar(5));
  EXPECT_NE(Dollar(5), Dollar(6));
}

TEST(MoneyTest, FrancMultiplication) {
  Franc five(5);
  Franc product = five.times(2);
  EXPECT_EQ(Franc(10), product);
  product = five.times(3);
  EXPECT_EQ(Franc(15), product);
}
