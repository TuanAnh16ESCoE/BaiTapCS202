#ifndef RECTANGLE_H_INCLUDED
#define RECTANGLE_H_INCLUDED
#include <iostream>
#include <conio.h>
using namespace std;
class Rectangle
{
 private:
      double width, height;
  public:
      Rectangle (double x, double y);
      double perimeter();
      double area();
};



#endif // RECTANGLE_H_INCLUDED
