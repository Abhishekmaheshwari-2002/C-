// This is a classe of student which  have some information .
// class is the updated version of the structure
#include <iostream>
using namespace std;

class student
{
private:
    int id;
    int fees;
    int mob; //[ id, feed,mob is a data member of classe but these are private ]

public:
    char name;
    int marks; // [name,marks is also data member of the classe but these are public]
    void setdata(int i, int f, int m);
    // {
    // id = i;
    // fees = f;
    // mob = m;
    // }
    // [ void setdata ,void getdata both are function it mean member function of the calsse ]

    void getdata()
    {

        cout << " student  abhi : id no. is : " << id << endl;
        cout << " student  abhi : fees   is : " << fees << endl;
        cout << " student  abhi : mob    is : " << mob << endl;
        cout << " student  abhi : name   is : " << name << endl;
        cout << " student  abhi : marks  is : " << marks << endl;

        cout << " student  raju : id no. is : " << id << endl;
        cout << " student  raju : fees   is : " << fees << endl;
        cout << " student  raju : mob    is : " << mob << endl;
        cout << " student  raju : name   is : " << name << endl;
        cout << " student  raju : marks  is : " << marks << endl
             << endl;
    }
};
void student ::setdata(int i, int f, int m) //[ :: this is the SRO operator which is use for intialize function outside the class ]
{
    id = i;
    fees = f;
    mob = m;
}
// void student ::getdata()
// {
//     cout << " student  abhi : id no. is : " << id << endl;
//     cout << " student  abhi : fees   is : " << fees << endl;
//     cout << " student  abhi : mob    is : " << mob << endl;
//     cout << " student  abhi : name   is : " << name << endl;
//     cout << " student  abhi : marks  is : " << marks << endl;

//     cout << " student  raju : id no. is : " << id << endl;
//     cout << " student  raju : fees   is : " << fees << endl;
//     cout << " student  raju : mob    is : " << mob << endl;
//     cout << " student  raju : name   is : " << name << endl;
//     cout << " student  raju : marks  is : " << marks << endl
//          << endl;
// }

int main()
{
    //  class is 'student abhi';
    student abhi, raju; //[abhi,raju is object of the class  ]
    abhi.name = 'a';
    abhi.marks = 95;
    abhi.setdata(1245, 3000, 896263085);
    abhi.getdata();

    raju.name = 'R';
    raju.marks = 33;
    raju.setdata(1225, 3500, 8839908242);
    raju.getdata();

    return 0;
}                    