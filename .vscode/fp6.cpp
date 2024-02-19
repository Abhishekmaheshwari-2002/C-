// program for find the power  using recursion
#include <iostream>
using namespace std;
int pb(int base, int power)// this is the function  which called recursion 
{
    if (power != 0)
    {
        return (base * pb(base, power - 1));// it is the condition of recursion 
    } 
    else
    {
        return 1;
    } 
}
int main()
{
    int result, base, power;// these are two inputs and one others variable 
    cout << " Enter the base of the number " << endl;
    cin >> base;

    cout << " Enter the power of the base  " << endl;
    cin >> power;
    result = pb(base, power);// it is the function stored value into varable result 
    cout << "The " << base << " to the power " << power << " is : " << result << endl;

    return 0;
}