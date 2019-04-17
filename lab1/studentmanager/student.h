#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
using namespace std;
class student
{
private:
    string name;
    long id;
    double mmath,meng,mphys,mchem,mav;
public:
    student();
    student(string a, long b, double mmath, double meng, double mphys, double mchem);
    double mave();
    void detail();
    void searchingbyname(string a);
    void searchingbyid(long id);


};

#endif // STUDENT_H_INCLUDED
