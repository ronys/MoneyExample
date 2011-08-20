#ifndef __MONEY_H
#define __MONEY_H
class Money
{
 public:
  enum CURRENCY {USD, CHF};
 Money(int amount, CURRENCY currency) : m_amount(amount), m_currency(currency)
  {}
  CURRENCY currency() const {return m_currency;}

  bool operator==(const Money &lhs) const
  {return lhs.m_currency == m_currency && lhs.m_amount == m_amount;}
  bool operator!=(const Money &lhs) const {return !(lhs == *this);}

  Money times(int multiplier) {return Money(m_amount * multiplier, m_currency);}

 protected:
  int m_amount;
  CURRENCY m_currency;
};
#endif /* __MONEY_H */

