#include <iostream>
using namespace std;
typedef union moblie

{
    int prize;
    char company;
    float tax;

} mb;

int main()
{
    mb p1;
    p1.prize = 1000;
    p1.company = 's';
    p1.tax = 23.23;
    cout << p1.company << endl;
    cout << p1.prize << endl;

    return 0;
}