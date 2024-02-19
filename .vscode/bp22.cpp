//program for find factorial of number //
#include <iostream>
using namespace std;
int fac(int a) // it is a automatically called  by its self
{
    if (a > 1) {
        return a * fac(a - 1); //it is a recursion function and it is a automatically called  by its self and this process is called recursiv
    }
    else
    {
        return 1;
    }
}

int main()
{
    int n;
    cout << "Enter the number for factorial " << endl;
    cin >> n;
    cout << " The  factorial of number is : " << fac(n) << endl; //here function is called
    return 0;
}