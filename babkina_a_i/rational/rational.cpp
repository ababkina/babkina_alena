#include <iostream>
#include "rational.h"

Rational::Rational(const int num) : Rational(num, 1) { }

Rational::Rational(const int numerator, const int denominator) : num(numerator), denom(denominator)
{
    if (0 == denom) {}
}

Rational& Rational:: operator+=(const Rational& rhs)
{
    num += rhs.num;
    denom += rhs.denom;
    return *this;
}