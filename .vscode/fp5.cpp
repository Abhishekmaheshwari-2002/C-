//program for find hcf using recursion
#include <iostream>
using namespace std;
int hcf(int n1, int n2) //this is the fucntion for find hcf of n1 and n2 
{
    if (n2 != 0)
    {
        return (n2, n1 % n2);
    }
    else
    {
        return n1;
    }
}
int main()

{
    int n1, n2;
    cout << "Enter the n1 and n2  " << endl;
    cin >> n1 >> n2;
    cout << " hcf of " << n1 << " and " << n2 << " is : " << hcf(n1, n2) << endl;

    return 0;
}