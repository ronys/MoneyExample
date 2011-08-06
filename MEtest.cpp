// Test framework for multi-currency example
#include "gtest/gtest.h"

#include "Money.h"
#include "Expr.h"
#include "Bank.h"

TEST(MoneyTest, Multiplication) {
  Money five(5, Money::USD);
  Money product = five.times(2);
  EXPECT_EQ(Money(10, Money::USD), product);
  product = five.times(3);
  EXPECT_EQ(Money(15, Money::USD), product);
}

TEST(MoneyTest, Equality) {
  EXPECT_EQ(Money(5, Money::USD), Money(5, Money::USD));
  EXPECT_NE(Money(5, Money::USD), Money(6, Money::USD));
  EXPECT_EQ(Money(5, Money::CHF), Money(5, Money::CHF));
  EXPECT_NE(Money(5, Money::CHF), Money(6, Money::CHF));
  EXPECT_NE(Money(5, Money::CHF), Money(5, Money::USD));
}

TEST(MoneyTest, Currency) {
  EXPECT_EQ(Money::USD, Money(1, Money::USD).currency());
  EXPECT_EQ(Money::CHF, Money(1, Money::CHF).currency());
}

TEST(MoneyTest, SimpleAddition) {
  Money five(5, Money::USD);
  Expr sum = five + five;
  Bank bank;
  Money converted = bank.convert(sum, Money::USD);
  EXPECT_EQ(Money(10, Money::USD), converted);
  EXPECT_EQ(Money(7, Money::USD),
            bank.convert(Money(3, Money::USD) +
                         Money(4, Money::USD), Money::USD));
}

TEST(MoneyTest, ConvertCurrency) {
  Bank bank;
  bank.addRate(Money::CHF, Money::USD, 2);
  Money result = bank.convert(Money(2, Money::CHF), Money::USD);
  EXPECT_EQ(Money(1, Money::USD), result);
  EXPECT_EQ(Money(2, Money::CHF),
            bank.convert(Money(1, Money::USD), Money::CHF));
  EXPECT_EQ(Money(1, Money::CHF),
            bank.convert(Money(1, Money::CHF), Money::CHF));
}

TEST(MoneyTest, MixedAddition) {
  Bank bank;
  bank.addRate(Money::CHF, Money::USD, 2);
  Money fiveBucks(5, Money::USD);
  Money tenFrancs(10, Money::CHF);
  Money result = bank.convert(fiveBucks + tenFrancs, Money::USD);
  EXPECT_EQ(Money(10, Money::USD), result);
}
