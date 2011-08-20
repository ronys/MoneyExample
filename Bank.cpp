#include "Bank.h"

Money Bank::convert(const Expr &value, Money::CURRENCY currency)
{
  Money m1 = convert(value.m_m1, currency);
  Money m2 = convert(value.m_m2, currency);
  return Money(m1.m_amount + m2.m_amount, currency);
}

Money Bank::convert(const Money &value, Money::CURRENCY currency)
{
  if (value.m_currency == currency)
    return value;
  else {
    double rate = rates[value.m_currency][currency];
    return Money(value.m_amount / rate, currency);
  }
}

void Bank::addRate(Money::CURRENCY from, Money::CURRENCY to, double rate)
{
  rates[from][to] = rate;
  rates[to][from] = 1.0/rate;
}


