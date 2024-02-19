//program for prime number //
#include <iostream>
using namespace std;
int main()
{
    int p;
    int prime = 1;
    cout << " Enter the number for check primeness " << endl;
    cin >> p;
    for (int i = 2; i < p / 2; i++)//0 or 1 is  not a prime number thats why i=2 not i=0.............
    {
        if (p % i == 0)//This is a condition for prime number
        {
            prime = 0;
            break;
        }
    }
    if (prime == 1)
    {
        cout << " it is a prime number " << endl;
    }
    else
    {
        cout << " it is  not a prime number " << endl;
    }

    return 0;
}