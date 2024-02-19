// program for pass array in function
#include <iostream>
using namespace std;
int pass(int ar[4]) // it will be taking array in passing
{
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout << i + 1 << " the element of an array " << ar[i] << endl;
    }
}
int main()

{
    int i, p, arr[100];
    for (int i = 0; i < 4; i++)
    {
        /* code */
        cout << " Enter  the element of an array " << endl;
        cin >> arr[i];
    }
    pass(arr); // here is function call
    return 0;
}