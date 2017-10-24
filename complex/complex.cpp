#include <iostream>
#include "complex.h"

Complex operator+(const Complex& lhs, const Complex& rhs);
Complex operator-(const Complex& lhs, const Complex& rhs);

Complex::Complex(const double real)
    : Complex(real, 0.0)
{
}

Complex::Complex(const double real, const double imaginary)
    : re(real)
    , im(imaginary)
{
}

Complex& Complex::operator+=(const Complex& rhs)
{
    re += rhs.re;
    im += rhs.im;
    return *this;
}

Complex& Complex::operator-=(const Complex& rhs)
{
    re -= rhs.re;
    im -= rhs.im;
    return *this;
}

Complex operator+(const Complex& lhs, const Complex& rhs)
{
    Complex sum(lhs);
    sum += rhs;
    return sum;
}

Complex operator-(const Complex& lhs, const Complex& rhs)
{
    return Complex(lhs.re - rhs.re, lhs.im - rhs.im);
}

Complex& Complex::operator*=(const double rhs)
{
    re *= rhs;
    im *= rhs;
    return *this;
}

Complex& Complex::operator*=(const Complex& rhs)
{
    double mul(re);
    re = rhs.re*mul - rhs.im*im;
    im = rhs.re*im + rhs.im*mul;
    return *this;
}

Complex& Complex::operator/=(const double rhs)
{
    re /= rhs;
    im /= rhs;
    return *this;
}

//Complex& Complex::operator/=(const Complex& rhs)
//{
//
//}