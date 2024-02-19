//program for finding cube by using function
#include <iostream>
using namespace std;
int cb(int a)// this is the function call by value 
{
    return a * a * a;
}
int main()
{
    int n;// it is the inputs 
    cout << " Enter the number for finding  cube " << endl;
    cin >> n;
    // it is the result 
    cout << "the cube " << n << " of is :" << cb(n) << endl;
    return 0;
}