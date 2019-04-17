#include <iostream>
#include "rectangle.h"
using namespace std;
int main()
{
    rectangle box1;
    double wid;
    double len;
    wid = 4; len = 3;
    box1.setwidth(wid);
    box1.setlength(len);
    cout << "Area: " << box1.Area() << endl;

    return 0;
}
