//program for convert days into weeks , years//
#include <iostream>
using namespace std;
int weeks(int a)//it is function for calculate week
{
    return a / 7;
}
int years(int b)//it is function for calculate year
{
    return b / 365;
}
int main()
{
    int d;
    cout << " Enter the days " << endl;
    cin >> d;
    cout << " The weeks is : " << weeks(d) << endl;
    cout << " The years is : " << years(d) << endl;

    return 0;
}