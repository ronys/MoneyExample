#include "Money.h"

class Franc : public Money {
 public:
 Franc(int amount) : Money(amount) {}
  Franc times(int multiplier) {return Franc(amount * multiplier);}
  bool operator==(const Franc &lhs) const {return lhs.amount == this->amount;}
  bool operator!=(const Franc &lhs) const {return !(lhs == *this);}
};
