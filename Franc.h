#include "Money.h"

class Franc : public Money {
 public:
 Franc(int amount) : Money(amount) {}
  virtual const char *currency() const {return "CHF";}
  Franc times(int multiplier) {return Franc(amount * multiplier);}
};
