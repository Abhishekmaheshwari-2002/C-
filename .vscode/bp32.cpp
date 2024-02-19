//progrma for convert binary to decimal //
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long int bn;
    int d = 0, i = 0; // i= 0 for increase power of 2 every time

    cout << " Enter the binary number " << endl;
    cin >> bn;
    cout << " your binary number is  : " << bn << endl;
    while (bn != 0)
    {

        d = d * 1 + bn % 10 * pow(2, i);// it is a code of conversition of binary to decimal
        bn = bn / 10;
        i++;
    }
    cout << " binary to decimal converted here " << endl;
    cout << " Decimal = " << d << endl;
    return 0;
}