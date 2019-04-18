#ifndef AREA_H_INCLUDED
#define AREA_H_INCLUDED
#include <cmath>
using namespace std;

class AREA
{
public:
static long Area (long a)
    {
        long area = 0;
        area = a*a*M_PI;
        return area;
    }
static long Area (double a, double b)
    {
        double area = 0;
        area = a*b;
        return area;
    }
static long Area (double a, double b, double c)
    {
        double area = 0 , p = (a+b+c)/2;
        area = sqrt(p*(p-a)*(p-c)*(p-c));
        return area;
    }

};


#endif // AREA_H_INCLUDED
