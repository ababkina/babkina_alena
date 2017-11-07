#include <iostream>
#include <sstream>
#include "rational.h"

bool testParse(const std::string& str)
{
    using namespace std;
    istringstream istrm(str);
    Rational z;
    istrm >> z;

    if (istrm.good())
    {
        cout << "Read success: " << str << " -> " << z << endl;
    }

    else
    {
        cout << "Read error : " << str << " -> " << z << endl;
    }
    return istrm.good();
}


int main()
{
    using namespace std;
    Rational z;
    z += Rational(4);
    cout << z << endl;
    return 0;
}


std::ostream& Rational::writeTo(std::ostream& ostrm) const
{
    ostrm << num << fraction << denom;
    return ostrm;
}

std::istream& Rational::readFrom(std::istream& istrm)
{
    char fraction(0);
    int numerator(0);
    int denominator(0);
    istrm >> numerator >> fraction >> denominator;

    if (istrm.good())
    {
        if (Rational::fraction == fraction)
        {
            num = numerator;
            denom = denominator;
        }

        else
        {
            istrm.setstate(std::ios_base::failbit);
        }
    }

    return istrm;
}