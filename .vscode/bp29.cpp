//program for  power of number and squre root and cube root and sum and average ..
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int sq, cb, x, n, p = 1;
    cout << " Enter the number  for  squre root  which do you like " << endl;
    cin >> sq;

    cout << " Enter the number  for  cube   root  which do you like " << endl;
    cin >> cb;
    cout << "Enter the number of x and n multiple use " << endl;
    cin >> x >> n;
    cout << " The squre root of " << sq << "  is : " << sqrt(sq) << endl;
    cout << " The cube  root of " << cb << "  is : " << cbrt(cb) << endl;
    cout << " The sum    of " << x << " and " << n << " is : " << x + n << endl;
    cout << " The avrage of " << x << " and " << n << " is : " << x + n / 2 << endl;
    for (int i = 0; i < n; i++)
    {
        p = p * x;// it is a format of squreing any number
    }
    cout << " The " << x << " to the power " << n << " is  : " << p << endl;
    return 0;
}