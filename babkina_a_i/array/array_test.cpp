#include "array.h"
#include <stdexcept>
#include <iostream>

using namespace std;
enum testEnum { r = 25, s = 13 };

int main()
{
    testEnum t = testEnum::s;
    testEnum t2 = testEnum::r;
    cout << t2 % t << endl;

    return 0;
};