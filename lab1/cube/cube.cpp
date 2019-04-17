#include "cube.h"
#include <iostream>
#include <cstdlib>
using namespace std;
void cube::setlen(double l)
{
    if (l>=0)
        len=l;
    else
    {
        cout << "invalid width\n";
    }
}
double cube::getlen()
{
    return len;
}
double cube::volume()
{
    return len*len*len;
}

