// A Bank is a repository of conversion rates

#ifndef __BANK_H
#define __BANK_H

#include "Expr.h"
#include "Money.h"

class Bank {
 public:
  Money convert(const Expr &value, Money::CURRENCY currency);
  Money convert(const Money &value, Money::CURRENCY currency);
  void addRate(Money::CURRENCY from, Money::CURRENCY to, double rate);
 private:
  double rates[Money::LAST_CURRENCY][Money::LAST_CURRENCY];
};

#endif /* __BANK_H */
