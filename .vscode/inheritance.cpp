#include <iostream>
using namespace std;

class teacher
{
public:
    int marks = 95;
    int id;
    int roll;
    int fee;
    teacher(int i, int r)
    {
        id = i;
        roll = r;
    }
    void show(void)
    {
        cout << " The data of id " << id << endl;
        cout << " The data of rollno " << roll << endl;
    }
    teacher() {}// it is the blank default constructor 
}; //it is base class

class student : public teacher

// class student : teacher
{
public:
    student(int i, int r)
    {
        id = i;
        roll = r;
        fee = 1000;
    }

    void showdata(void)
    {
        cout << "\nthe value is " << id << endl;
        cout << " the value is " << roll << endl;
        cout << " the value of marks " << marks << endl;
        cout << " the value of fee " << fee << endl;
    }
    //  student() {}
};

int main()
{
    teacher rohan(10, 12304);
    teacher mohan(10, 12304);
    rohan.show();
    mohan.show();
    student a(1, 12347);
    a.showdata();
    cout << a.id << endl;
    cout << a.roll << endl;
    cout << a.fee << endl;
    cout << a.marks << endl;
    return 0;
}