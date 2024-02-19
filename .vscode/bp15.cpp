//program for check even or odd
#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << " Enter the number" << endl;
    cin >> num;
    // (num % 2 == 0) ? cout << num << " is even ...." << endl : cout << num << " is odd  ...." << endl; //it is a teneray operator //
    if (num % 2 == 0)// it is a condition of even odd number 
    {
        cout << num << " is even ...." << endl;
    }
    else
    {
        cout << num << " is odd  ...." << endl;
    }

    return 0;
}