#include <iostream>
#include <conio.h>
using namespace std;

class Real
{
private:
    float value;
public:
    Real(float v=0)
    {
        value = v;
    }
    Real operator+(Real &A)
    {
        float temp = value + A.value;
        return Real(temp);
    }
    Real operator-(Real &A)
    {
        float temp = value - A.value;
        return Real(temp);
    }
    Real operator*(Real &A)
    {
        float temp = value * A.value;
        return Real(temp);
    }
    Real operator/(Real &A)
    {
        float temp = value / A.value;
        return Real(temp);
    }
    void display()
    {
        cout << value << endl;
    }
};
int main()
{
    Real A(6.5);
    Real B(3.5);
    Real C (8.76);
    Real D(14.35);
    Real Res = A + B;
    Res.display();
    Res = D - B;
    Res.display();
    Res = D/B;
    Res.display();
    Res = C*B;
    Res.display();,
    return 0;
}
