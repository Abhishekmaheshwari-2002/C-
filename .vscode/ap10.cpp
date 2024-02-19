// program for insert element in specific position
#include <iostream>
using namespace std;
int main()
{
    // create an array
    int arr[100], i;
    for (int i = 0; i < 5; i++)
    {
        cout << " Enter the " << i + 1 << " array of an element " << endl;
        cin >> arr[i];
    }
    // displaying element of array before inserting
    for (int i = 0; i < 5; i++)
    {
        cout << "  the " << i + 1 << " element of an array : " << arr[i] << endl;
    }

    cout << " Enter the which position element do you want to enter " << endl;
    cin >> i;

    cout << " Enter the " << i << " position of element for inserting " << endl;
    cin >> arr[i];
    // displaying element of array after inserting
    for (int i = 0; i < 5; i++)
    {
        cout << "  the " << i + 1 << " element of an array" << arr[i] << endl;
    }

    return 0;
}