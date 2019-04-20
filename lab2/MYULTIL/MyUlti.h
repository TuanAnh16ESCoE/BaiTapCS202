#ifndef MYULTI_H_INCLUDED
#define MYULTI_H_INCLUDED
#include <cmath>
using namespace std;
class myulti
{
public:
static:
    long factorial(int num)
{
    long result=1;
    for(int i=2;i<=num;i++) result*=i;
    return result;
}
    bool isPrime(long number)
{
    long numSqrt = (long)sqrt(number);
    bool result = true;
    for(int i=2; i<numSqrt && result; i++)
    if(number%i==0) result = false;
    return result;
}
    bool isTriangle(double num1, double num2, double num3)
{
    return (num1>(num2+num3) && num2>(num1+num3) && num3>(num2+num1));
}

};


#endif // MYULTI_H_INCLUDED
