#include <iostream>
#include "cmath"
using namespace std;
class circle
{
private:
    double radius;
public:
    circle(double value)
    {
        radius = value;
    }
    double perimeter()
    {
        return 2*M_PI*radius;
    }
    double area()
    {
        return M_PI*pow(radius,2);
    }
};
int main()
{
   circle cir1 = circle(8);
   circle cir2 = circle(16);
   cout <<  "Area of cir1 is: " << cir1.area() << endl;
   cout <<  "Perimeter of cir1 is: " << cir1.perimeter() << endl;
}
