#include "Money.h"

class Dollar : public Money {
 public:
 Dollar(int amount) : Money(amount) {}
  Dollar times(int multiplier) {return Dollar(amount * multiplier);}
  bool operator==(const Dollar &lhs) const {return lhs.amount == this->amount;}
  bool operator!=(const Dollar &lhs) const {return !(lhs == *this);}
};
