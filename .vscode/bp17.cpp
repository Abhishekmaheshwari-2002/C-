//program for check year is leap year is not //
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout << " Enter the year " << endl;
    cin >> year;
    if (year % 4 == 0) //it is a leap year method
    {
        cout << " This is a leap year " << endl;
    }
    else
    {
        cout << " This is a nor a leap year " << endl;
    }

    return 0;
}