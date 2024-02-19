//porgram for to check prime number ...
#include <iostream>
using namespace std;
int prime(int n1)
{
    if (n1 % 2 == 0) 
    {
        cout << " this number is  not prime " << endl;  
    }
    else
    {
        cout << " this number is prime " << endl;
    }
}
// if number is divided by only 1 and its self so this number is called prime number 
int main()

{
    int n;
    cout << " Enter the number for check the numebr is prime or not  " << endl;
    cin >> n;
    prime(n);
    return 0;
}