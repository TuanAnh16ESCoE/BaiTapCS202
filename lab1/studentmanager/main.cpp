#include <iostream>
#include "student.h"
using namespace std;
void insertdata();
void searchingstudent();


student insertdata(student data[],int a)
{
    string name;
    long id;
    double mmath,meng,mphys,mchem;
    for (int i = 0; i < a; i++)
    {
        cout << "Student number " << i + 1 << endl;
        cout << "Name: "; cin >> name;
        cout << "ID: "; cin >> id;
        cout << "Math score: "; cin >> mmath;
        cout << "English score: "; cin >> meng;
        cout << "Physics score: "; cin >> mphys;
        cout << "Chemistry score: "; cin >> mchem;
        data[i].student(name,id,mmath,meng,mphys,mchem);
    }
}


void searchingstudent(student data[],int a)
{
    string sname;
    long sid;
    char A;
    cout << "Search student by name or ID (N/I): ";
    cin >> A;
    if (A == 'N')
    {
        cout << "Enter the name you find: ";
        cin >> sname;
        for (int i = 0; i < a; i++)
        {
            data[i].searchingbyname(sname);
        }
    }
    else if (A == 'I')
    {
        cout << "Enter the id: ";
        cin >> sid;
        for (int i = 0; i < a; i++)
        {
            data[i].searchingbyid(sid);
        }
    }
}
int main()
{
    int a;
    string name;

    cout << "Insert your total student: ";
    cin >> a;
    student *table = new student[a];
    insertdata(table, a);
    searchingstudent(table, a);
    /*student student1 = student("Robert", 13258425, 8,7,8,6);
    student1.detail();*/
    return 0;

}
