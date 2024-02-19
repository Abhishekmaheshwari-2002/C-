// program for enter 5 number and display first and  last
#include <iostream>
using namespace std;
int main()
{
    int arr[10];

    for (int i = 0; i < 5; i++)
    {
        cout << " Enter the 5 number of element " << i + 1 << endl;
        cin >> arr[i];
    }
    cout << " First number is " << arr[0] << endl
         << " second number is  : " << arr[4] << endl;
    return 0;
}