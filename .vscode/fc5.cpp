//program  for find factorial using function outside class
#include <iostream>
using namespace std;
int fac(int n)// it is the function for find fac without use recursion
{
    int tk = 1;// intialiaze tk =1 because it will start 1
    if (n > 0)
    {
        for (int i = 1; i <= n; i++)
        {

            tk *= i;
        }
    }
    else
    {
        cout << " Error,your input is 0" << endl;
    }
    return tk;// this is the main point of this program 
}

int main()
{
    int n;//created a input
    cout << " Enter the number " << endl;
    cin >> n;
    cout << " The factorial of " << n << " is : " << fac(n) << endl;

    return 0;
}