//program  for swap without using third variable //
#include <iostream>
using namespace std;
int swapp(int &a, int &b)// it is a function for swaping number 
{
    int temp = a;
    a = b;
    b = temp;

}
int main()
{
    int a = 10, b = 12;
    cout << " The swap number is before " << a << " and " << b << endl;
    swapp(a, b);// it is a function call and it is also called actual parameter
    cout << " The swap number is after  " << a << " and " << b << endl;

    return 0;
}