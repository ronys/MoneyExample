// An expression (Expr) holds Monies of different currencies
// until we convert them to the desired currency

#ifndef __EXPR_H
#define __EXPR_H
class Money;

class Expr {
 public:
  Expr(const Money &m1, const Money &m2);
};
#endif /* __EXPR_H */
