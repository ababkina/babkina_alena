#ifndef RATIONAL
#define RATIONAL

#include <iosfwd>

struct Rational
{

    Rational() {}
    explicit Rational(const int num);
    Rational(const int num, const int denom);
    Rational& operator+=(const Rational& rhs);
    Rational& operator+=(const int rhs) { return operator+=(Rational(rhs)); }

    int num;
    int denom;
    static const char fraction{ '/' };

    std::ostream& writeTo(std::ostream& ostrm) const;
    std::istream& readFrom(std::istream& istrm);

};

inline std::ostream& operator<<(std::ostream& ostrm, const Rational& rhs)
{
    return rhs.writeTo(ostrm);
}

inline std::istream& operator >> (std::istream& istrm, Rational& rhs)
{
    return rhs.readFrom(istrm);
}
#endif