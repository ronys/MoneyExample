#ifndef __MONEY_H
#define __MONEY_H
class Money
{
 public:
  enum CURRENCY {USD, CHF};
 Money(int amount, CURRENCY currency) : m_amount(amount), m_currency(currency)
  {}
  CURRENCY currency() const {return m_currency;}
  virtual ~Money() {}

  bool operator==(const Money &lhs) const
  {return typeid(lhs) == typeid(*this) && lhs.m_amount == this->m_amount;}
  bool operator!=(const Money &lhs) const {return !(lhs == *this);}
 protected:
  int m_amount;
  CURRENCY m_currency;
};
#endif /* __MONEY_H */

