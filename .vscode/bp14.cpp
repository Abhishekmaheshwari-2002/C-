//program for compound interest /
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int p, r, t, ci;
    cout << "Enter the value of p,r,t" << endl;
    cin >> p >> r >> t;
    ci =  p*pow((1 + (r / 100)), t); //it is a pow( ) it is a function for ci //
    cout << "compound interest : " << ci << endl;
    return 0;
}