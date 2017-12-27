#include "priorityqueuel.h"
#include <iostream>

using namespace std;

int main() 
{
    PriorityQueueL que;
    que.push(1.3);
    que.push(15.4);
    que.push(7.2);
    cout << que << endl;

    PriorityQueueL que2;
    que2.push(546.3);
    que2.push(1244.4);
    que2.push(156.2);
    cout << que2 << endl;

    que.pop();
    que2.push(154689);
    cout << "the 1st que.pop: " << endl << que << endl;
    cout << "the 2nd que.pop: " << endl << que2 << endl;

    PriorityQueueL que3;
    PriorityQueueL que4;
    cout << "the 3rd: " << endl << que3 << endl;
    cout << "the 4th: " << endl << que4 << endl;

    que3.push(100.1);
    que3.push(200.2);
    que3.push(300.3);
    que3.push(400.4);
    
    que4.push(10.1);
    que4.push(20.2);
    que4.push(30.3);
    que4.push(40.4);
    que4.push(50.5);
    
    cout << "the 3rd: " << endl << que3 << endl;
    cout << "the 4th: " << endl << que4 << endl;

    que = que3;
    que4 = que2;
    cout << "the 1st: " << endl << que << endl;
    cout << "the 2nd: " << endl << que2 << endl;
    cout << "the 3rd: " << endl << que3 << endl;
    cout << "the 4th: " << endl << que4 << endl;

    return 0;
}