#include <iostream>
using namespace std;
class base1
{
private:
    int b1;
public:
    base1(int a1)
    {
        b1 = a1;
        cout << " The constructor is called in  base1 " << endl;
    }
    void showbase1(void)
    {
        cout << " The value of b1 is :" << b1 << endl;
    }
};
class base2
{

private:
    int b2;

public:
    base2(int a2)
    {
        b2 = a2;
        cout << " The constructor is called in  base2 " << endl;
    }
    void showbase2(void)
    {
        cout << " The value of b2 is :" << b2 << endl;
    }
};
class derivied1 : public base1, public base2
{
private:
    int d1;

public:
    derivied1(int a, int b, int a3) : base1(a), base2(b)
    {
        d1 = a3;
        cout << " The derivied constructor is called " << endl;
    }
    void showdervied(void)
    {
        cout << " The derivied class value d1 is :" << d1 << endl;
    }
};

int main()
{
    derivied1 rohan(1, 2, 3);
    rohan.showbase1();
    rohan.showbase2();
    rohan.showdervied();

    return 0;
}