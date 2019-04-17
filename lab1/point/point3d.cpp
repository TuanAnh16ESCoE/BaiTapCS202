#include <iostream>
#include "cmath"
#include "point3d.h"
using namespace std;
point3d::point3d(double xval, double yval, double zval)
{
    x = xval;
    y = yval;
    z = zval;
}

double point3d::distancefrom(point3d point2)
{
    double a;
    a = sqrt(pow(x-point2.x,2)+pow(y-point2.y,2)+pow(z-point2.z,2));
    return a;
}
double point3d::distancefromcenter()
{
    point3d pointzero(0,0,0);
    return distancefrom(pointzero);
}
void point3d::details()
{
    cout << "x= " << x << "; y= " << y << "; z= " << z << endl;
    cout << "Distance from center is " << distancefromcenter() << endl;
}
