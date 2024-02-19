#include <iostream>
using namespace std;
class base1
{
protected:
    int b1;

public:
    void setb1(int a)
    {
        b1 = a;
    }
};
class base2
{
protected:
    int b2;

public:
    void setb2(int b)
    {
        b2 = b;
    }
};
class base3
{
protected:
    int b3;

public:
    void setb3(int c)
    {
        b3 = c;
    }
};
class dervied : public base1, public base2, public base3
{
public:
    void show(void)
    {
        cout << " The value of b1 is :" << b1 << endl;
        cout << " The value of b2 is :" << b2 << endl;
        cout << " The value of b3 is :" << b3 << endl;
        cout << " The sum of value   is :" << b1 + b2 + b3 << endl;
    }
};
int main()
{
    dervied a;
    a.setb1(10);
    a.setb2(123);
    a.setb3(13);
    a.show();

    return 0;
}