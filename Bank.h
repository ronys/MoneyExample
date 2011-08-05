// A Bank is a repository of conversion rates

#ifndef __BANK_H
#define __BANK_H

#include "Expr.h"
#include "Money.h"

class Bank {
 public:
  Money convert(const Expr &value, Money::CURRENCY currency);
};

#endif /* __BANK_H */
