// program for find even or odd in array
#include <iostream>
using namespace std;
int main()
{
    // create an array
    int arr[100], n;
    cout << "Enter the size of an array " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << " Enter " << i + 1 << " element of an array " << endl;
        cin >> arr[i];
    }
    // condition for evne or odd
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << i + 1 << " This number is even  " << arr[i] << endl;
        }

        else
        {
            cout << i + 1 << " This number is odd " << arr[i] << endl;
        }
    }
    return 0;
}