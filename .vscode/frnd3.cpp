#include <iostream>
using namespace std;
class B;
class A
{
    friend void swap(A &, B &);

private:
    int val;

public:
    void setval(int v)
    {
        val = v;
    }
    void showval(void)

    {
        cout << val << endl;
    }
    // friend B;
};

class B
{
    friend void swap(A &, B &);

private:
    int var;

public:
    void setvar(int r)
    {
        var = r;
    }
    void showvar(void)

    {
        cout << var << endl;
    }
    // void swap(A &a1, B &b1)
    // {
    //     int temp;
    //     temp = a1.val;
    //     a1.val = b1.var;
    //     b1.var = temp;
    // }
};
void swap(A &a1, B &b1)
{
    int temp;
    temp = a1.val;
    a1.val = b1.var;
    b1.var = temp;
}

int main()
{
    A a;
    a.setval(12);
    B b;
    // B b,c;
    b.setvar(10);
    cout << " the value of before swap : a is \n";
    a.showval();
    cout << " the value of before swap : b is\n ";
    b.showvar();
    swap(a, b);
    // c.swap(a, b);

    cout << " the value of after swap : a is \n";
    a.showval();
    cout << " the value of after swap : b is\n ";
    b.showvar();

    return 0;
}