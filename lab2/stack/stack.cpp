#include <iostream>
#include "stack.h"
using namespace std;
STACK::STACK()
{
    top = -1;
}
int STACK::isEmpty()
{
    if(top==-1)
    {
        cout << "STACK IS EMPTY" << endl;
        return 1;
    }
    else
    {
        cout << "STACK IS NOT EMPTY" << endl;
        return 0;
    }
}
int STACK::isFull()
{
    if (top==(MAXSIZE-1))
    {
        cout << "STACK IS FULL" << endl;
        return 1;
    }
    else
    {
        cout << "STACK IS NOT FULL" << endl;
        return 0;
    }
}
int STACK::push(int n)
{
    if(isFull()==1)
    {
        return 1;
    }
    else
    {
        ++top;
        num[top]=n;
        cout << "added " << n << endl;
        return n;
    }
}
int STACK::pop()
{
    int temp;
    if (isEmpty())
    {
        return 0;
    }
    else
    {
        cout << "pop out " << num[top] << endl;
        temp = num[top];
        --top;
        return temp;
    }
}

void STACK::display()
{
    cout << "The Stack is: ";
    for (int i = 0; i <= top; i++)
        cout << num[i]<< " ";
    cout << endl;
}

void STACK::stacksize()
{
    cout << "The size of stack is " << MAXSIZE << endl;
}

void STACK::gettop()
{
    cout << num[top] << endl;
}
