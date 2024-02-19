#include <iostream>
using namespace std;
int main()
{
    int a = 5;
    int b = 10;
    cout << " use of comparison opertator\n";
    cout << " first  operator is (a==b) :" << (a == b) << endl;
    cout << " second operator is (a!=b) :" << (a != b) << endl;
    cout << " third  operator is (a<=b) :" << (a <= b) << endl;
    cout << " fourth operator is (a>=b) :" << (a >= b) << endl;
    cout << " five   operator is (a<b)  :" << (a < b) << endl;
    cout << " sixth  operator is (a>b)  :" << (a > b) << endl
         << endl;

    cout << " logical opertor\n";
    cout << " first operator && is " << ((a == b) && (a != b)) << endl;
    cout << " second operator && is " << ((a == b) || (a != b)) << endl;
    cout << " three operator && is " << (!(a == b) && (a != b)) << endl;
    return 0;
}