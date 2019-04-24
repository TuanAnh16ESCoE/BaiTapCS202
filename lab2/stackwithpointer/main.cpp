#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    stkptr mystk;
    mystk.isEmpty();
	mystk.push(5);
	mystk.push(12);
	mystk.push(7);
	mystk.push(9);
	mystk.stksize();
	mystk.isEmpty();
	cout<<mystk.pop()<<endl;
	cout<<mystk.pop()<<endl;
	cout<<mystk.pop()<<endl;
	cout<<mystk.pop()<<endl;
	mystk.isEmpty();
	mystk.stksize();
    return 0;
}
