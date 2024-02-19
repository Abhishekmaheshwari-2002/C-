#include <iostream>
using namespace std;

int fac(int n)
{
    if (n <= 1)
    {
        return 1;
    }

    return n * fac(n - 1);
}

int main()
{
    long long int a;
    cout << "enter the value of a is:" << endl;
    cin >> a;
    cout << " The factorial of a is : " << fac(a) << endl;

    return 0;
}