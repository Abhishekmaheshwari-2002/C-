#include <iostream>
using namespace std;
void swapref(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
// void swappnt(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

int main()
{
    int a = 4;
    int b = 5;
    cout << "The value of a " << a << " and the value of b is " << b << endl;
    // swappnt(&a, &b);
    swapref(a, b);
    // cout << " after using swap pointer \n";
    cout << " after using swap refrence \n";
    cout << "The value of a " << a << "  and the value of b is " << b << endl;

    return 0;
}