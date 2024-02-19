//program for swap two number by call by  refrence
#include <iostream>
using namespace std;
int swap1(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a, b;
    cout << " Enter the number " << endl;
    cin >> a >> b;
    cout << " before swap number " << a << " , " << b << endl
         << endl;
    cout << " Using call by refrence " << endl;
    swap1(a, b);
    cout << " after swap : " << a << "," << b << endl
         << endl;

    return 0;
}