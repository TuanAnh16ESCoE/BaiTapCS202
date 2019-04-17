#include <iostream>
#include "point3d.h"
#include "cmath"
using namespace std;

int main()
{
    point3d point1 = point3d(4,8,5);
    point3d point2 = point3d(3,4,7);
    point1.details();
    point2.details();
    cout << "distance from point1 to point2 " << point1.distancefrom(point2) << endl;
    cout << "distance from point2 to point1 " << point2.distancefrom(point1) << endl;
    return 0;
}
