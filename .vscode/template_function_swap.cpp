#include <iostream>
using namespace std;
template <class T>// it is a  template function  
void swapp(T &a, T &b)// it is use for without class 
{
    T temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 10 ;
    int b = 13;
    swapp(a, b);
    cout << " a and b is :" << a << b << endl;

    return 0;
}