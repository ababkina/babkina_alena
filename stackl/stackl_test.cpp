#include "stackl.h"
#include <iostream>

using namespace std;

int main()
{
    StackL s;
    s.push(132);
    s.push(56);
    s.push(5);
    cout << "Untwisting stack:" << endl << s << endl;
    
    s.pop();
    cout << "Untwisting this stack after pop:" << endl << s << endl;
    cout << "IsEmpty: " << s.isEmpty() << endl;

    StackL s2(s);
    cout << "Copy costructor: " << endl << s2 << endl;
    
    s2.top() = 11001;
    cout << "Change top: " << endl << s2 << endl;

    StackL sEmpty;
    StackL sCopiedFromEmpty(sEmpty);
    cout << "Copy from empty costructor: " << endl << sCopiedFromEmpty << endl;

    StackL s3;
    s3.push(75);
    s3.push(0);
    s3.push(458);
    s3.push(-51);
    cout << "Stack s3:" << endl << s3 << endl;
    
    s2 = s3;
    cout << "s2 = s3:" << endl << s2 << endl;
    
    StackL s4;
    s4.push(99);
    s4.push(-99);
    cout << "Stack s4:" << endl << s4 << endl;
    
    s3 = s4;
    cout << "s3 = s4:" << endl << s3 << endl;

    return 0;
};