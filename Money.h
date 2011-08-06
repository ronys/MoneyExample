#ifndef __MONEY_H
#define __MONEY_H
#include <iostream>
class Bank;

class Money
{
 public:
  enum CURRENCY {USD, CHF, LAST_CURRENCY};
 Money(int amount, CURRENCY currency) : m_amount(amount), m_currency(currency)
  {}
  CURRENCY currency() const {return m_currency;}

  bool operator==(const Money &rhs) const
  {return rhs.m_currency == m_currency && rhs.m_amount == m_amount;}
  bool operator!=(const Money &rhs) const {return !(rhs == *this);}

  Money times(int multiplier) {return Money(m_amount * multiplier, m_currency);}
  friend std::ostream &operator<<(std::ostream &os, const Money &m);
 private:
  int m_amount;
  CURRENCY m_currency;
  friend class Bank;
};

inline std::ostream &operator<<(std::ostream &os, const Money &m)
{
  switch (m.m_currency) {
  case Money::USD: os << "$ "; break;
  case Money::CHF: os << "CHF "; break;
  }
  os << m.m_amount;
  return os;
}
#endif /* __MONEY_H */

