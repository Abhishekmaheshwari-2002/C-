//program for find area and perimeter of rectaengle
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    cout << " Enter the value of a and b " << endl;
    cin >> a >> b;
    cout << " The area of rectangle  : " << a * b << endl;            // this is a fomula of area of rectangle
    cout << " The perimeter of rectangle  : " << 2 * (a + b) << endl; // this is a fomula of perimeter  of rectangle
    return 0;
}