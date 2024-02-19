//c++ program for simple calculator and scincetific calculator
#include <iostream>
#include <cmath>
using namespace std;
class simplecalculator
{
protected:
    int a, b;

public:
    void setval()
    {
        cout << " Enter the value of a " << endl;
        cin >> a;
        cout << " Enter the value of b " << endl;
        cin >> b;
    }
    void calculator()
    {
        cout << " The value of a+b is :" << a + b << endl;
        cout << " The value of a-b is :" << a - b << endl;
        cout << " The value of a*b is :" << a * b << endl;
        cout << " The value of a/b is :" << a / b << endl;
    }
};
class scincetificcaculator
{
protected:
    int a, b;

public:
    void setdata()
    {
        cout << " Enter the value of a " << endl;
        cin >> a;
        cout << " Enter the value of b " << endl;
        cin >> b;
    }
    void scincetificcalculator()
    {
        cout << " The value of sin(a) is :" << sin(a) << endl;
        cout << " The value of cos (a)is :" << cos(a) << endl;
        cout << " The value of tan (b)is :" << tan(b) << endl;
        cout << " The value of log(b)is :" << log(b) << endl;
    }
};
class multicalculator : public simplecalculator, public scincetificcaculator
{
};
int main()
{
    multicalculator a;
    a.setval();
    a.calculator();
    a.setdata();
    a.scincetificcalculator();
    return 0;
}