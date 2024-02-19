#include <iostream>
using namespace std;

int main()
{
    int a = 12;
    int *ptr = &a;
    // int *ptr = new int(1);
    int *arr = new int[3];
    arr[0] = 10;
    arr[1] = 105;
    arr[2] = 120;
    // delete[] arr;
    cout << " The value of a is " << *(ptr) << endl;
    cout << " The value of a is " << arr[0] << endl;
    cout << " The value of a is " << arr[1] << endl;
    cout << " The value of a is " << arr[2] << endl;

    return 0;
}