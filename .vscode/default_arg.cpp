#include <iostream>
using namespace std;

int art(int a, int b = 20)
{

    return a * b;
}

int main()
{
    int a, b;
    cout << " enter the value of a and b is : " << endl;
    cin >> a >> b;
    cout << " the area of triangle is : " << art(a) << endl;

    return 0;
}