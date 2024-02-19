#include <iostream>
using namespace std;
class noraml
{
    int a, b;

public:
    void setdata(int n, int m)
    {
        a = n;
        b = m;
    }
    void getdata(void)
    {
        cout << " The value of a is " << a << endl;
        cout << " The value of b is " << b << endl;
    }
};
int main()
{
    noraml a1;
    a1.setdata(10, 54);
    a1.getdata();
    //pointer of object
    noraml *ptr = &a1;
    (*ptr).setdata(10, 76);
    (*ptr).getdata();
    noraml *ptr1 = new noraml;
    (*ptr1).setdata(10, 756);
    (*ptr1).getdata();
    noraml *ptr2 = new noraml;
    ptr2->setdata(10, 756);
    ptr2->getdata();

    return 0;
}