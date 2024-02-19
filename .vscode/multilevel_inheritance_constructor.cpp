//Multi level inheritaince using constructor 
#include <iostream>
using namespace std;
class student
{
protected:
    int id;
    int roll;

public:
    student(int i, int r) : id(i), roll(r) {}
    // {
    //     id = i;
    //     roll = r;
    // }
    void showroll(void)
    {
        cout << " The id   no is " << id << endl;
        cout << " The roll no is " << roll << endl;
    }
    student() {}
};
class exam : virtual public student
{
protected:
    int maths;
    int hindi;

public:
    exam() {}
    exam(int m, int h) : maths(m), hindi(h) {}
    // {
    //     maths = m;
    //     hindi = h;
    // }
    void shownum(void)
    {
        cout << " The number in maths " << maths << endl;
        cout << " The number in hindi " << hindi << endl;
    }
};
class result : public exam
{
public:
    result(int a, int b, int c, int d) : student(a, b), exam(c, d) {}
};

int main()
{
    result rohan(12, 1231, 95, 45);
    rohan.showroll();
    rohan.shownum();
    return 0;
}