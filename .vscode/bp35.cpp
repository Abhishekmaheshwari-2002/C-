//progrma for simple calculator //
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    char sign;
    cout << " Enter the value of a and  b  for calculating  " << endl;
    cin >> a;
    cin >> b;
    // this is the some instruction of choose mehtod for calculator
    cout << " if you want to sum(+)          so press 1 " << endl;
    cout << " if you want to substraction(-) so press 2 " << endl;
    cout << " if you want to multiple(*)     so press 3 " << endl;
    cout << " if you want to divide(/)       so press 4 " << endl;
    cout << " if you want to remainder(%)    so press 5 " << endl;
    cout << " Enter the any method of sign " << endl;
    cin >> sign;

    switch (sign)
    {
    case '1':
        cout << " The sum(+) of a and   b is : " << a + b << endl;
        break;

    case '2':
        cout << " The substraction(-) of a and   b is : " << a - b << endl;
        break;

    case '3':
        cout << " The multiple(*)  of a and   b is : " << a * b << endl;
        break;

    case '4 ':
        cout << " The divide(/) of a and   b is : " << a / b << endl;
        break;

    case '5':
        cout << " The remainder(%) of a is  : " << a % b << endl;
        break;

    default:
        cout << " wrong input " << endl;
        break;
    }
    return 0;
}