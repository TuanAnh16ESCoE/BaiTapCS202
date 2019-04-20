#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    STACK stk;
    cout << "Size of this stack: ";
    stk.stacksize();
    cout << "Check stack: ";
    stk.isEmpty();
    cout << "add 5 integer to stack: 8 - 10 - 12 - 14 - 16" << endl;
    stk.push(8);
    stk.push(10);
    stk.push(12);
    stk.push(14);
    stk.push(16);
    stk.display();
    cout << "top stack: ";
    stk.gettop();
    cout << "Pop the last number 14 and 16 of stack: " << endl;
    stk.pop();
    stk.pop();
    stk.display();
    return 0;
}
