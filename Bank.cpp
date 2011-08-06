#include "Bank.h"

Money Bank::convert(const Expr &value, Money::CURRENCY currency)
{
  return Money(value.m_m1.m_amount + value.m_m2.m_amount, Money::USD);
}

Money Bank::convert(const Money &value, Money::CURRENCY currency)
{
  int rate = 2;
  return Money(value.m_amount / rate, currency);
}

void Bank::addRate(Money::CURRENCY from, Money::CURRENCY to, int rate)
{
}


