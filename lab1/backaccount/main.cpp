#include <iostream>
#include "bankaccount.h"
#include "stdlib.h"
using namespace std;

int main()
{
    account acc1;
    acc1.createacc();
    acc1.accdeposit();
    acc1.accwithdraw();
    return 0;
}
