//program for swap two values by using refrence
#include <iostream>
using namespace std;
void swap1(int &x, int &y)//this is the fucntion which swap the values  and &X and &y is represent the refrence condition
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a, b;// created two inputs 
    cout << " Enter the values a and b " << endl;
    cin >> a >> b;//entered the inputs
    cout << "before using refrence " << endl;
    cout << a << "," << b << endl;
    cout << " After using refrence " << endl;
    swap1(a, b);// this is the function call
    cout << a << "," << b << endl;

    return 0;
}