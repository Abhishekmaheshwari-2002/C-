//program for finding prime number between two range
#include <iostream>
using namespace std;
int checkprime(int n)
{
    bool pm = true;       // this condition explain means this program can run
    if (n == 0 || n == 1) // it will be check n is not 0 ,1
    {
        pm = false;
    }
    else
    {
        for (int j = 2; j <= n / 2; j++)
        {
            if (n % j == 0)
            {
                pm = false;
                break;
            }
        }
    }
    return pm; // if for loop will be cheked input is right it will be return
}
int main()
{
    // here are two inputs
    int n1, n2;
    bool prime;
    cout << " Enter the number the range for finding prime number " << endl;
    cin >> n1 >> n2;
    cout << " here is all the prime number between " << n1 << " and " << n2 << " : " << endl;
    if (n1 > n2)
    {
        cout << " your input is can not be valid plese try again" << endl;
    }

    for (int i = n1 + 1; i < n2; i++)
    {
        prime = checkprime(i); // this is the fucntion to check the prime is prime or not
        if (prime)
            cout << i << " ";
    }

    return 0;
}