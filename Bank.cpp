#include "Bank.h"

Money Bank::convert(const Expr &value, Money::CURRENCY currency)
{
  return Money(value.m_m1.m_amount + value.m_m2.m_amount, Money::USD);
}
