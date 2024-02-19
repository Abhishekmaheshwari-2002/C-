//program for  find the sum  element of array
#include <iostream>
using namespace std;
int main()
{
    // create an two array 
    int arr[100], arr1=0, n,i, j = 0;
    cout<<"Enter the size of an array "<<endl;
    cin>>n;
    for (int i = 0; i < n; i++)
    {
        cout << " Enter the element of an array " << endl;
        cin >> arr[i];
    }
    // process of adding element of an array
    for (int i = 0; i < n; i++)
    {
        arr1 += arr[i];
    }
    cout << " Sum of element of an array : " << arr1 << endl;
    return 0;
}