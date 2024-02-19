//program for armstrong number//
#include <iostream>
using namespace std;
int main()
{
    int r, rn, an, sum = 0;
    cout << "Enter the numebr " << endl;
    cin >> rn;
    an = rn;
    while (rn != 0)
    {
        r = rn % 10;
        sum = sum + (r * r * r);//it is a condition of armstrong number  
        rn = rn / 10;
    }
    if (an == sum)
    {
        cout << " it is a armsrong numeber " << endl;
    }
    else
    {
        cout << " it is  not  a  armsrong numeber " << endl;
    }

    return 0;
}