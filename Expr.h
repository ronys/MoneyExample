// An expression (Expr) holds Monies of different currencies
// until we convert them to the desired currency

#ifndef __EXPR_H
#define __EXPR_H
#include "Money.h"

class Bank;

class Expr {
 public:
  Expr(const Money &m1, const Money &m2);
 private:
  const Money m_m1;
  const Money m_m2;
  friend class Bank;
};

Expr operator+(const Money &lhs, const Money &rhs);
  

#endif /* __EXPR_H */
