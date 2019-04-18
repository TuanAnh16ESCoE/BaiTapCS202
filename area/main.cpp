#include <iostream>
#include <cmath>
#include "area.h"
using namespace std;

int main()
{
    cout << "Area of circle with radius 3: " << AREA::Area(3) << endl;
    cout << "Area of rectangle with a = 6, b = 8: " << AREA::Area(6,8) << endl;
    cout << "Area of triangle with a = 3, b = 4, c = 5: " << AREA::Area(3,4,5) << endl;
    return 0;
}
