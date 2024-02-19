//progrm for reverse number //
#include <iostream>
using namespace std;
int main()
{
    long long  int rv = 0, num;
    cout << " Enter the number " << endl;
    cin >> num;
    while (num != 0) //this is a loop for riverse number
    {
        rv = rv * 10 + num % 10;  //this is a method for.........
        num = num / 10;
    }
    cout << " your reverse numbe is a : " << rv << endl;

    return 0;
}