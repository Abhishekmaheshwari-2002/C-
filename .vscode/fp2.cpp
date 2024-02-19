//program for find the sum of natural number using recursion
#include <iostream>
using namespace std;
int add(int n) // this is a function for finding fac... this fucntion type called recursion.....
{
    if (n != 0) // this is the condition for finding fac.......
    {
        return n + add(n - 1);
    }
}
int main()
{
    int n;
    cout << " Enter the numeber for finding fac.. " << endl;
    cin >> n;
    cout << " The sum of natural number " << n << " is " << add(n) << endl;
    return 0;
}