#include "Expr.h"

Expr::Expr(const Money &m1, const Money &m2) : m_m1(m1), m_m2(m2)
{}

Expr operator+(const Money &lhs, const Money &rhs)
{
  return Expr(lhs, rhs);
}
