//progrma for find perfect number is or not
#include <iostream>
using namespace std;
int main()
{
    int i, per, n, sum = 0;
    cout << "Enter the number for check it is perfect number " << endl;
    cin >> n;
    for (i = 1; i < n; i++)
    {
        per = n % i;
        if (per == 0)
            sum = sum + i;
    }
    if (sum == n)
    {

        cout << " this numeber is perfect " << endl;
    }
    else
    {

        cout << " this numeber is not  a perfect " << endl;
    }

    return 0;
}