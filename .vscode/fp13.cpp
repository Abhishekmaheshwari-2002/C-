// program for swap two number by call by valu
#include <iostream>
using namespace std;
int swap(int x, int y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a = 20, b = 30;
    cout << " before swap number " << a << " , " << b << endl;
    cout << " Using call by value" << endl;
    swap(a, b);
    cout << " after swap : " << a << "," << b << endl;
    return 0;
}