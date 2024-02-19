#include <iostream>
using namespace std;

class base
{
private:
    int a;

protected:
    int b;

public:
    int c;
    void set(void)
    {
        a = 10;
        b = 11;
        c = 13;
    }
    void show(void)
    {
        cout << " a is " << a << endl;
        cout << " b is " << b << endl;
        cout << " c is " << c << endl;
    }
};
// class derived : protected base
class derived : protected base
{

public:
    int d = 456;
    void setdata(void)
    {  
        b = 10;
    }   
    void show(void)
    {
        cout << " the b is  :" << b << endl;
    }
};

int main()
{
    derived a, b;
    a.setdata();
    a.show();
    base b;
    
    return 0;
}