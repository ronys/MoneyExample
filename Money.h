#ifndef __MONEY_H
#define __MONEY_H
class Money
{
 public:
 Money(int amount) : amount(amount) {}

  bool operator==(const Money &lhs) const {return lhs.amount == this->amount;}
  bool operator!=(const Money &lhs) const {return !(lhs == *this);}
 protected:
  int amount;
};
#endif /* __MONEY_H */

