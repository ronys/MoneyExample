#include "Money.h"

class Dollar : public Money {
 public:
 Dollar(int amount) : Money(amount) {}
  virtual const char *currency() const {return "USD";}
  Dollar times(int multiplier) {return Dollar(amount * multiplier);}
};
