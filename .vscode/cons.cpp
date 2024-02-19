#include <iostream>
using namespace std;

class A
{
private:
    int a;
    int b;

public:
    void setdata(int n, int m)
    {
        a = n;
        b = m;
    }
    void showdata(void)
    {
        cout << " The value of a is :" << a << " and The value of b is :" << b << endl;
    }
    // A(void) // it is default constructor
    // {
    //     a = 10;
    //     b = 52;
    // }

    A(int p, int q) // it is parameterized constructor
    {
        a = p;
        b = q;
    }
};

int main()
{
    A a1(4, 5); //it is implity call
    a1.showdata();
    A b1 = A(12, 45); //it is explity call
    b1.showdata();
    return 0;
    // a1.setdata(2, 5);
}