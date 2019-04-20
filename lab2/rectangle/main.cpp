#include <iostream>
#include "rectangle.h"
#include <conio.h>
using namespace std;

int main()
{
   Rectangle rec1(23,20);
   Rectangle rec2 (40,50);
   cout<<"area of rec1 is : "<< rec1.area() << endl ;
   cout<<"\n area of rec2 is : "<<rec2.area() << endl;
    return 0;
}
