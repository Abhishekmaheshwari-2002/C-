 //program for sum and average of three number../
#include <iostream>
using namespace std;
int sum(int a, int b, int c)//it is a function for sum()
{
    return a + b + c;
}
int average(int l, int m, int n)//it is a function for average()
{
    return (l + m + n) / 2;
}
int main()

{
    int a, b, c;
    cout << " The sum     of three numbe  is : " << sum(10, 1, 2) << endl;
    cout << " The average of three number is : " << average(10, 10, 10) << endl;
    return 0;
}