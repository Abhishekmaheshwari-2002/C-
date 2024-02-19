#include <iostream>
using namespace std;
int main()
{
    // int a = 10;
    // int &b = a;
    // cout << b << endl;
    // cout << a << endl;
    int a = 10;
    float b = 20.30f;
    cout << (float)a << endl;
    cout << float(a) << endl;
    cout << (int)b << endl;
    cout << int(b) << endl;
    int c = int(b);
    cout << c << endl;

    return 0;
}