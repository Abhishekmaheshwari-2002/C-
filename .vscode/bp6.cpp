// program for multiple two varables //
#include <iostream>
using namespace std;
int multiple(int a, int b)
{
    return a * b;  
}
int main()
{
    int a, b, c;
    cout << " Enter the value of a and b " << endl;
    cin >> a >> b;
    c = multiple(a, b); // it is a function for multiple two number
    cout << " The multiple of a and b is : " << c << endl;
    return 0;
}