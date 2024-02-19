#include <iostream>
using namespace std;
class base
{
private:
    int a;

public:
    int b;
    void setdata(void);
    int geta();
    int getb();
};
void base ::setdata(void)
{
    a = 12;
    b = 45;
}
int base::geta()
{
    return a;
}
int base::getb()
{
    return b;
}
 class derived : base
// class derived : public base
{
public:
    int c;
    void method();
    void show(void);
};
void derived ::method()
{
    setdata();
    c = b + geta();
}
void derived::show(void)
{
    cout << "The value of a is : " << geta() << endl;
    cout << "The value of b is : " << b << endl;
    cout << "The value of c is : " << c << endl;
}
int main()
{
    derived der;
    // der.setdata();

    der.method();
    der.show();

    return 0;
}