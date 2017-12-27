#include "matrixr.h"

#include <iostream>
#include <stdexcept>

using namespace std;

int main()
{
    MatrixR m0;
    cout << "Constructor without params: " << m0 << endl;
  
    MatrixR m(2, 3);
    for (int i(0); i < 2 * 3; i++)
    {
        m.at(i / 3, i % 3) = i;
    }
    cout << m << endl;
    cout << "Lenth of array: " << m.lenth() << endl;
    
    MatrixR m2(2, 2);
    m2.at(0, 0) = 10;
    m2.at(1, 0) = -2;
    m2.at(1, 1) = 5;
    cout << "m2: " << endl << m2 << endl;
    
    MatrixR m3(1, 1);
    m3 = m2;
    cout << "operator = (m3 = m2):" << endl;
    cout << m3 << endl;
    
    MatrixR m4(m3);
    cout << "Copy constructor: m4:" << endl << m4 << endl;
    cout << "m3 == m4 is " << (m3 == m4) << endl;
    
    m4.resize(4, 5);
    cout << "after m4.resize(4, 5):" << endl;
    cout << m4;
    
    m4.resize(1, 2);
    cout << "after m4.resize(2, 2):" << endl;
    cout << m4;

    return 0;
};