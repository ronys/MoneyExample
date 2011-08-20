#include "Money.h"

class Dollar : public Money {
 public:
 Dollar(int amount) : Money(amount, USD) {}
  Dollar times(int multiplier) {return Dollar(m_amount * multiplier);}
};
