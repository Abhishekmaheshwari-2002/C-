//program for find the number of digit  of any number..//
#include <iostream>
using namespace std;
int main()
{
    long long int n;
    int count = 0;
    cout << " Enter the number " << endl;
    cin >> n;
    while (n != 0)
    {
        n = n /10; //it is a  method of count number
        count++;
    }

    cout << " The number of  digit is : " << count << endl;
    return 0;
}