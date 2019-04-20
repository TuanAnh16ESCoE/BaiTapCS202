#include <iostream>
#include "linkedlist.h"
using namespace std;

int main()
{
    List list1;
    int n;
    cout << "List size = "; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int value;
        cout << "\nValue of node " << i << " : ";
        cin >> value;
        list1.createnode(value);
    }
    list1.display();
    cout << "insert 16 at start, insert 10 at end, insert 8 at position 4" << endl;
    list1.insert_start(16);
    list1.insert_end(10);
    list1.insert_position(6,8);
    list1.display();
    cout << "delete first, delete end, delete position 5" << endl;
    list1.delete_first();
    list1.delete_last();
    list1.delete_position(5);
    list1.display();
    return 0;
}
