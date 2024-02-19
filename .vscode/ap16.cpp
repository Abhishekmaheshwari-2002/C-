//program for calculate average element of an array
#include <iostream>
using namespace std;
int main()
{
    // create an array 
    int a[4], av = 0;
    for (int i = 0; i < 4; i++)
    {
        cout << " Enter the element of an array " << endl;
        cin >> a[i];
    }
    // calculate to average element of an array 
    for (int i = 0; i < 4; i++)
    {

        av += a[i] / 2;
    }
    cout << " Average of an array : " << av << endl;
    return 0;
}