#include "cube.h"
#include <iostream>

using namespace std;

int main()
{
    cube cube1;
    double len;
    len = 5;
    cube1.setlen(len);
    cout << "volume: " << cube1.volume() << endl;
    return 0;
}
