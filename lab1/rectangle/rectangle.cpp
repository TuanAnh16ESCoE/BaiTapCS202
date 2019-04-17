#include "rectangle.h"
#include <iostream>
#include <cstdlib>
using namespace std;
void rectangle::setwidth(double w)
{
    if (w>=0)
        width = w;
    else
    {
        cout << "invalid width\n";
    }
}
void rectangle::setlength(double l)
{
    if (l>=0)
        length = l;
    else
    {
        cout << "invalid width\n";
    }
}
double rectangle::getWidth()
{
    return width;
}
double rectangle::getLength()
{
    return length;
}
double rectangle::Area()
{
    return width * length;
}
