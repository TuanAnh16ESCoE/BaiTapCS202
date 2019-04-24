#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#include <iostream>

using namespace std;
class stkptr
{
    private:
	struct stknode
	{
		int num;
		stknode *next;
	};
	stknode *top;
public:
    stkptr();
    void push(int num);
    int pop (void);
    int stksize (void);
    bool isEmpty();

};


#endif // STACK_H_INCLUDED
