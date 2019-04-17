#include <iostream>
#include "stdlib.h"
#include "bankaccount.h"

using namespace std;

void account::createacc()
{
    char A;
    cout << "Enter Your Name: ";
    cin >> name;
    id = rand()%(999999+1);
    cout << "Your ID account is " << id << endl;
    balance = 0;
    cout << "Your balance now is 0" << endl << "Do you want to deposit now (Y/N): ";
    cin >> A;
    if (A == 'Y')
    {
        accdeposit();
    }

}

void account::accdeposit()
{
    cout << "enter your deposit money: ";
    cin >> deposit;
    balance = balance + deposit;
    cout << "your balance: " << balance << endl;
}

void account::accwithdraw()
{

    cout << "enter your withdraw money: ";
    cin >> withdraw;
    if (withdraw > balance)
    {
        cout << "Sorry, your balance is not enough" << endl;
    }
    else
    {
        balance = balance - withdraw;
        cout << "Your balance now: " << balance << endl;
    }
}

