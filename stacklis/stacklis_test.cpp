#include "stacklis.h"
#include <iostream>

using namespace std;

int main()
{
    StackLis testData;
    testData.push(111);
    testData.push(-8);
    testData.push(0);

    StackLis stEmpty;
    cout << stEmpty << endl;

    StackLis stTest(testData);
    cout << "Do 3 writePop for stTest that had push: 111, -8, 0" << endl;
    cout << stTest << endl;
    cout << stTest << endl;
    cout << stTest << endl;
    cout << endl;

    cout << "Do writePop for stCopy by copy constructor from testData" << endl;
    StackLis stCopy(testData);
    cout << stCopy << endl;
    cout << stCopy << endl;
    cout << stCopy << endl;
    cout << endl;

    cout << "Do writePop for stEmptyCopy by copy constructor from stEmpty" << endl;
    StackLis stEmptyCopy(stEmpty);
    cout << stEmptyCopy << endl;
    cout << endl;

    cout << "Do writePop for stCopyEmpty by operator= from testData " << endl;
    StackLis stCopyEmpty;
    stCopyEmpty = testData;
    cout << stCopyEmpty << endl;
    cout << stCopyEmpty << endl;
    cout << stCopyEmpty << endl;
    cout << endl;

    cout << "Do writePop for stFullCopy by operator= from stEmpty " << endl;
    StackLis stFullCopy;
    stFullCopy.push(10);
    stFullCopy.push(-52);
    stFullCopy.push(684);
    stFullCopy = stEmpty;
    cout << stFullCopy << endl;
    cout << endl;

    cout << "Do writePop for stCopyEqual by operator= from testData where lenth of stCopyEqual was equal to lenth of testData" << endl;
    StackLis stCopyEqual;
    stCopyEqual.push(541);
    stCopyEqual.push(45);
    stCopyEqual.push(1);
    stCopyEqual = testData;
    cout << stCopyEqual << endl;
    cout << stCopyEqual << endl;
    cout << stCopyEqual << endl;
    cout << endl;

    cout << "Do writePop for stCopyLess by operator= from testData where lenth of stCopyLess was less" << endl;
    StackLis stCopyLess;
    stCopyLess.push(541);
    stCopyLess.push(45);
    stCopyLess = testData;
    cout << stCopyLess << endl;
    cout << stCopyLess << endl;
    cout << stCopyLess << endl;
    cout << endl;

    cout << "Do writePop for stCopyMore by operator= from testData where lenth of stCopyMore was more" << endl;
    StackLis stCopyMore;
    stCopyMore.push(541);
    stCopyMore.push(45);
    stCopyMore.push(1);
    stCopyMore.push(4);
    stCopyMore = testData;
    cout << stCopyMore << endl;
    cout << stCopyMore << endl;
    cout << stCopyMore << endl;
    cout << endl;

    return 0;
}