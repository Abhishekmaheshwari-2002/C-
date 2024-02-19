///program for add two number //
#include <iostream>
using namespace std;
int add(int a, int b)//it is a fuction for adding two number 
{
    return a + b;
}
int main()
{
    int a, b;
    cout << " Enter the two number for adding " << endl;
    cin >> a >> b;
    cout << " The sum of a and b is : " << add(a,b);
    return 0;
}