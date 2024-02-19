//program for find the factorial using recursion
#include <iostream>
using namespace std;
int fac(int n) // this is function for finding fac... this fucntion type is recursion
{
    if (n > 1)
    {
        return n * fac(n - 1);
    }
    else
    {
        return 1;
    }
}
int main()
{
    int n;
    cout << " Enter the numeber for finding fac.. " << endl;
    cin >> n;
    cout << " The factorial of number " << n << " is " << fac(n) << endl;
    return 0;
}