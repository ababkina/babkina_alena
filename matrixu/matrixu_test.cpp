#include "matrixu.h"
#include <iostream>

using namespace std;

int main()
{
    MatrixU m;
    cout << "Constructor without params m: " << endl << "(Row = " << m.Row();
    cout << " and Col = " << m.Col() << ')' << endl << m << endl << endl;

    MatrixU m2(3, 4);
    m2.at(0, 0) = 123;
    m2.at(1, 1) = 456;
    m2.at(2, 2) = 789;
    cout << "Constructor with params and add some elements m2:" << endl << m2 << endl << endl;
    
    const MatrixU mConst(m2);
    cout << "Element from const MatrixU = " << mConst.at(2, 2) << endl << endl;
    
    MatrixU m3(m2);
    cout << "Copy constructor m3(m2):" << endl << m3 << endl << endl;
    
    MatrixU m4(3, 2);
    m4.at(0, 1) = -45;
    m4.at(1, 0) = -454;
    m4.at(2, 1) = -14;
    cout << "m4:" << m4 << endl << endl;
    
    m3 = m4;
    cout << "m3 = m4:" << endl << m3 << endl << "m3 == m4 is " << (m3 == m4) << endl << endl;
    
    m3.at(0, 0) = 5;
    cout << "m3 == m4 after m3.at(0, 0) = 9; is " << (m3 == m4) << endl << endl;
    
    m4.resize(4, 5);
    cout << "After m4.resize(4, 5):" << m4 << endl << endl;
    
    m4.resize(2, 2);
    cout << "After m4.resize(2, 2):" << m4 << endl << endl;
    
    return 0;
}