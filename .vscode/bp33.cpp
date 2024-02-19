//program for decimal to binary
#include <iostream>
using namespace std;
int main()
{
    int b[10], deci, i;
    cout << " Enter the decimal number " << endl;
    cin >> deci;
    cout << " your decimal number is : " << deci << endl;
    for (i = 0; deci > 0; i++)
    {

        b[i] = deci % 2;
        deci = deci / 2;
    }
    cout << " your binary no is  : ";
    for (i = i - 1; i >= 0; i--)
    {
        cout << b[i];
    }

    return 0;
}