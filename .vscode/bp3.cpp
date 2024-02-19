// program for find quotient and remainder//
#include <iostream>
using namespace std;
int quotient(int dn, int ds)
{
    int q = dn / ds;
    return q;
}
int remainder(int a, int b, int c)
{
    int R = (a / b) - c;
    return R;
}

int main()
{
    int dvn, dvs, q, R;
    cout << " Divineded =divisor * quotient + remainder " << endl;
    cout << " Enter the value of Divineded and Divisor  " << endl;
    cin >> dvn;
    cin >> dvs;

    cout << " quotient= divineded /divisor " << endl;
    q = quotient(dvn, dvs); //it is a function for calculate quotient
    cout << " quotient= " << q << endl;
    
    cout << " Remainder = Divineded /divisor * quotient " << endl;
    R = remainder(dvn, dvs, q); //it is a function for calculate remanider
    cout << " Remainder = " << R << endl;
    return 0;
}
