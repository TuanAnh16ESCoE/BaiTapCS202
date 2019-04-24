#include "stack.h"
#include <stdlib.h>
#include <iostream>

using namespace std;

stkptr::stkptr()
	{
		top = NULL;
	}
bool stkptr::isEmpty()
	{
		if (top == NULL)
        {
            cout << "stack is empty " << endl;
            return 1;
        }
		else
        {
            cout << "stack is not empty " << endl;
            return 0;
        }
	}
void stkptr::push(int value)
	{
		stknode *node = new stknode;
		node->num = value;
		if(!top)
		{
			top = node;
			node->next = NULL;
		}
		node->next = top;
		top = node;
	}
int stkptr::pop(void)
	{
		if(!top) return 0;
		int temp = top->num;
		stknode *ptr = top;
		top = top->next;
		delete ptr;
		return temp;
	}
int stkptr::stksize(void)
	{
		cout << "Size of stack is: " << sizeof(stkptr) << endl;
	}

