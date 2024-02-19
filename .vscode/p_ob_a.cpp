#include <iostream>
using namespace std;
class complax
{

private:
    int a;
    int b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void setdataofsum(complax a1, complax a2)
    {
        a = a1.a + a2.a;
        b = a1.b + a2.b;
    }
    void getdata(void)
    {
        cout << " The complax no. is :  " << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complax a1, a2, a3;
    a1.setdata(2, 3);
    a1.getdata();

    a2.setdata(3, 4);
    a2.getdata();

    a3.setdataofsum(a1, a2);
    a3.getdata();
    return 0;
}