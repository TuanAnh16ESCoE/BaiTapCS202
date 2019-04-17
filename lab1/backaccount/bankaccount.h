#ifndef BANKACCOUNT_H_INCLUDED
#define BANKACCOUNT_H_INCLUDED
using namespace std;
class account
{
private:
    string name;
    long id;
    double balance, deposit, withdraw;
public:
    void createacc();
    void accdeposit();
    void accwithdraw();
};


#endif // BANKACCOUNT_H_INCLUDED
