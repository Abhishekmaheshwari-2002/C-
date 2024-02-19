#include <iostream>
using namespace std;

class data
{
private:
    int a, b, c;

public:
    // data(int x, int y = 11, int z = 56)
    // {
    //     a = x;
    //     b = y;
    //     c = z;
    // }

    data()
    {
        a = 10;
        b = 45;
    }

    data(int x, int y)
    {
        a = x;
        b = y;
    }
    data(int n)
    {
        a = n;
        b = 2;
    }

    // void showdata(void);
    void showdata(void)
    {
        cout << " The  complax no is " << a << "+" << b << "i" << endl;
    }
};
// void data ::showdata(void)
// {
//     cout << " The  complax no is " << a << "+" << b << "i" << endl;
// }

int main()
{
    data x;
    x.showdata();

    data y(5, 10);
    y.showdata();

    data z(9);
    z.showdata();

    return 0;
}