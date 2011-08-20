#include "Money.h"

class Franc : public Money {
 public:
 Franc(int amount) : Money(amount, CHF) {}
  Franc times(int multiplier) {return Franc(m_amount * multiplier);}
};
