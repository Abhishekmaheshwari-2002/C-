//program for acees element of an array using pointer
#include <iostream>
using namespace std;
int main()
{
    // create an array for taking element 
    int arr[100];
    int *p = arr;// creating a pointer for array this way to holds the whole element of an array .............
    // int *p = &arr[0];// creating a pointer for array,this way to holds the particular element of an array........... 
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter the element of an array " << endl;
        cin >> p[i];
    }
    //Display the element of an array using pointer 
    for (int i = 0; i < 5; i++)
    {
        cout << "Acess the " << i + 1 << " no element of an array : " << p[i] << endl;
    }

    return 0;
}