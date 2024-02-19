// program for finding largest number in array
#include <iostream>
using namespace std;
int main()
{
    // create an array for taking element
    int arr[100], n;
    cout << " Enter the size of an array " << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << "Enter the size of an array " << i + 1 << ":" << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        // if condition is true so arr[0] value will be changed
        if (arr[0] < arr[i]) // arr[0]  is the first element of an array if it is a big so then it print

        {
            arr[0] = arr[i];
        }
    }

    cout << " largest number is  : " << arr[0] << endl;
    return 0;
}
