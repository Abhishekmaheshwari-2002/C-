#include <iostream>
using namespace std;
class hello
{
    int a;
    int b;

public:
    hello(int i, int j) /* : a(i), b(j)*/
    {
        a = i;
        b = j;
        cout << " The value of a  is " << a << endl;
        cout << " The value of b  is " << b << endl;
    }
};
int main()
{
    hello a(1, 2);

    return 0;
}