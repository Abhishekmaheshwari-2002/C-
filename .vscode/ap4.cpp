// program for riverse array element enterd by the users
#include <iostream>
using namespace std;
int main()
{
    // create two array for taking element
    int arr[100], n,arr1[100], j = 0;
    cout << "Enter the size of an array " << endl;
    cin >> n;
    for (int i = 0; i < n; i++) // this loop work for taking element
    {
        cout << "Enter the element of an array no " << i + 1 << " " << endl;
        cin >> arr[i];
    }
    for (int i = n - 1; arr[i] != '\0'; i--) // this loop work for riverseing element
    {
        arr1[j++] = arr[i];
    }
    arr[j] = '\0';
    cout << " here the riverse elemnet no : " << endl;
    for (int k = 0; k < n; k++) // this loop work for dispaly element which is riversed
    {

        cout << arr1[k];
    }

    return 0;
}