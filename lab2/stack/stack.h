#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED
#define MAXSIZE 10

class STACK
{
private:
    int num[MAXSIZE];
    int top;
public:
    STACK();
    int push(int a);
    int pop();
    int isEmpty();
    int isFull();
    void display();

    void gettop();
    void stacksize();

};

#endif // STACK_H_INCLUDED
