// program for delite element an array
#include <iostream>
using namespace std;
int main()
{
    // create an array and del intiger variable
    int del, arr[100], n, j = 0;
    cout << "Enter the size of an array" << endl;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << " Enter the element of " << i + 1 << " an array " << endl;
        cin >> arr[i];
    }
    // taking element for deliteing
    cout << " Enter element for deliting " << endl;
    cin >> del;
    for (int i = 0; i < n; i++)
    {
        // this is the process of deliting element in array
        if (arr[i] != del)
        {
            arr[j++] = arr[i];
        }
    }
    cout << " after delite array " << endl;
    for (int j = 0; j < n - 1; j++)
    {
        cout << arr[j] << " ";
    }

    return 0;
}