//program for add,sub,multi.......using function
#include <iostream>
using namespace std;
int sum(int a, int b)// this is the function
{
    return a + b;
}
int sub(int a, int b)// this is the function
{
    return a - b;
}
int multi(int a, int b)// this is the function
{
    return a * b;
}
int main()

{
    int a, b;// two inputs created 
    cout << " Enter the value of a and b " << endl;
    cin >> a >> b;
    //these are the result
    cout << "sub of a and b is : " << sub(a, b) << endl;
    ;
    cout << "sum of a and b is : " << sum(a, b) << endl;
    cout << "multi of a and b is : " << multi(a, b) << endl;
    ;
    return 0;
}