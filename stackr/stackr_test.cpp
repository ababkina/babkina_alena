#include "stackr.h"
#include <iostream>

using namespace std;

int main()
{
    StackR s;
    s.push(10);
    s.push(71);
    s.push(9);
    cout << "Untwisting stack:" << endl;
    cout << s << endl;
    
    s.pop();
    cout << "Untwisting this stack after pop:" << endl;
    cout << s << endl;
    
    StackR s2(s);
    cout << "Copy costructor: " << endl;
    cout << s2 << endl;
    
    s2.top() = 10101;
    cout << "Change top: " << endl;
    cout << s2 << endl;

    StackR sEmpty;
    StackR sCopiedFromEmpty(sEmpty);
    cout << "Copy from empty costructor: " << endl;
    cout << sCopiedFromEmpty << endl;

    StackR s3;
    s3.push(4);
    s3.push(-1);
    s3.push(100);
    s3.push(0);
    cout << "Stack s3:" << endl << s3 << endl;
    
    s2 = s3;
    cout << "s2 = s3:" << endl << s2 << endl;
    
    StackR s4;
    s4.push(99);
    s4.push(-99);
    cout << "Stack s4:" << endl << s4 << endl;
    
    s3 = s4;
    cout << "s3 = s4:" << endl << s3 << endl;
    
    return 0;
};