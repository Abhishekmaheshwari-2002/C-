//program for greatest number between two number using inline fucntion ............
#include <iostream>
using namespace std;
inline int lg(int x, int y) // this is the function which is inline function
{
    if (x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}
int main()
{
    int a, b; // created two inputs
    cout << " Enter the two number a and b " << endl;
    cin >> a >> b; // enterd inputs
    cout << "The largest number is : " << lg(a, b) << endl;

    return 0;
}