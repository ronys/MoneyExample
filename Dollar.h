#include "Money.h"

class Dollar : public Money {
 public:
 Dollar(int amount) : Money(amount) {}
  Dollar times(int multiplier) {return Dollar(amount * multiplier);}
};
