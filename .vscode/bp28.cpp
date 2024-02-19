//program for number is palindrm is not
#include <iostream>
using namespace std;
int main()
{
    int rv = 0, pn;
    cout << "Enter the number for pailndrom " << endl;
    cin >> pn;
    while (pn != 0)
    {

        rv = rv * 10 + pn % 10;//it is a mehtod of riverse numebr  
        pn = pn / 10;
    }

    if (pn == rv)//it is a condition of palindrom 
    {
        cout << " This is  number  a pailndrom ... " << endl;
    }
    else
    {

        cout << " This is not number  a pailndrom ... " << endl;
    }

    return 0;
}