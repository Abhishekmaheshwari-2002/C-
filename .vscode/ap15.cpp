// program for finding smallest number in array
#include <iostream>
using namespace std;
int main()
{
    // create an array for taking element
    int arr[100], n; // n  is the size of array
    cout << " Enter the size of array " << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        cout << " Enter the element of " << i + 1 << " ";
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++)
    {
        if (arr[0] > arr[i]) // arr[0]  is the first element of an array if it is small so then it print
        {
            arr[0] = arr[i]; // if condition is true so arr[0] value will be changed
        }
    }
    cout << " smallest number is  : " << arr[0] << endl;
    return 0;
}