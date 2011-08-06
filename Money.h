#ifndef __MONEY_H
#define __MONEY_H

class Bank;

class Money
{
 public:
  enum CURRENCY {USD, CHF};
 Money(int amount, CURRENCY currency) : m_amount(amount), m_currency(currency)
  {}
  CURRENCY currency() const {return m_currency;}

  bool operator==(const Money &rhs) const
  {return rhs.m_currency == m_currency && rhs.m_amount == m_amount;}
  bool operator!=(const Money &rhs) const {return !(rhs == *this);}

  Money times(int multiplier) {return Money(m_amount * multiplier, m_currency);}

 private:
  int m_amount;
  CURRENCY m_currency;
  friend class Bank;
};
#endif /* __MONEY_H */

