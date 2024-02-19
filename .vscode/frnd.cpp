#include <iostream>
using namespace std;
class complax
{
    
private:
    int a;
    int b;

public:
    friend complax sumofcomplax(complax a1, complax a2);
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }
    void getdata(void)
    {
        cout << " The complax no. is :  " << a << "+" << b << "i" << endl;
    }
};

complax sumofcomplax(complax a1, complax a2)
{
    complax a3;
    a3.setdata((a1.a + a2.a), (a1.b + a2.b));
    return a3;
}
int main()
{
    complax b1, b2, b3;
    b1.setdata(2, 3);
    b1.getdata();

    b2.setdata(3, 4);
    b2.getdata();

    b3 = sumofcomplax(b1, b2);
    b3.getdata();
    return 0;
}
