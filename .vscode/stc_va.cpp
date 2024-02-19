#include <iostream>
using namespace std;
class student
{
private:
    int id;
    static int studentno;

public:
    void getdata(void)
    {
        cout << "enter the id of the student " << endl;
        cin >> id;
        getchar;
        // studentno++;
    }
    void setdata(void)
    {
        // cout << "The student no. is " << studentno << endl;
        cout << "The student id no. is " << id << endl;
    }
    static void getcount(void)
    {
        studentno++;
        cout << " the count no. is " << studentno << endl;
    }
};
int student ::studentno = 0;

int main()
{
    student rohit, mohit, ab;
    rohit.getcount();
    rohit.getdata();
    rohit.setdata();

    mohit.getcount();
    mohit.getdata();
    mohit.setdata();

    ab.getcount();
    ab.getdata();
    ab.setdata();

    return 0;
}