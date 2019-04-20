#include <iostream>
#include <conio.h>
#include "rectangle.h"

Rectangle::Rectangle(double a, double b)
{
    width = a;
    height = b;
}
double Rectangle::perimeter()
{
    return 2*(width + height);
}
double Rectangle::area()
{
    return width * height;
}
