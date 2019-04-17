#include <iostream>
#include "cmath"
#include "student.h"
using namespace std;

student::student()
{

}
student::student(string a, long b, double c, double d, double e, double f)
{
        name=a;
        id = b;
        if (c >= 0 || c <=100)
        mmath=c;
        if (d >= 0 || d <=100)
        meng=d;
        if (e >= 0 || e <=100)
        mphys=e;
        if (f >= 0 || f <=100)
        mchem=f;
        mave();
}
double student::mave()
{
    double mav = 0;
    mav = (mmath + meng + mphys + mchem)/4;
    return mav;
}
void student::detail()
{
    cout << "Name: " << name << endl;
    cout << "ID: " << id << endl;
    cout << "Math score: " << mmath << endl;
    cout << "English score: " << meng << endl;
    cout << "Physics score: " << mphys << endl;
    cout << "Chemistry score: " << mchem << endl;
    cout << "Average score: " << mave() << endl;
}

void student::searchingbyname(string name)
{
    if (this->name == name)
    {
        detail();
    }
}


void student::searchingbyid(long id)
{
    if (this->id == id)
    {
        detail();
    }
}
