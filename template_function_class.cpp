#include <iostream>
using namespace std;

template <class T1>
void swapp(T1 &a, T1 &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int x = 12;
    int y = 13;
    swapp(x, y);
    cout << " the vlaue after a and b is : " << x << "," << y << endl;
    return 0;
}