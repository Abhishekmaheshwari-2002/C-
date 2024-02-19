//program for prime number between range  //
#include <iostream>
using namespace std;
int main()
{ 
    int p, m;
    int prime = 1;
    cout << " Enter the number  p an m " << endl;
    cin >> p >> m;
    cout << " Number between " << p << " and " << m << endl;
    while (p < m)
    { 
        prime = 1;
        if (p == 0 || m == 0)
        {
            prime = 0;
        }
        else
        {
            for(int i = 2; i <= p / 2; i++) //0 or 1 is  not a prime number that's why i=2 not i=0.............
            {
                if (p % i == 0) //This is a condition for prime number
                {
                    prime = 0;
                    break;
                }
            }
        }

        if (prime)

        cout << p << " ";
        ++p;
    }
    return 0;
}