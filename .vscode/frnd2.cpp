#include <iostream>
using namespace std;
class Y;
class X
{
    // friend void sum(X a1, Y b1);

private:
    int no;

public:
    void setno(int n)
    {
        no = n;
    }
    friend Y;
};
class Y
{
    // friend void sum(X a1, Y b1);

private:
    int num;

public:
    void setnum(int n)
    {
        num = n;
    }

    void sum(X a1, Y b1)

    {
        cout << " the value of no. is " << a1.no << endl;
        cout << " the value of num. is " << b1.num << endl;

        cout << " the sum of both private varibal of both class:" << a1.no + b1.num << endl;
    }
};
int main()
{
    X a;
    a.setno(4);
    Y b, c;
    b.setnum(8);
    c.sum(a, b);
    return 0;
}