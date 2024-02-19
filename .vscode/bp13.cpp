//program for squre of root ..//
#include <iostream>
#include <cmath>// it is a header  file which is use of maths method
using namespace std;
int main()
{
    int n, m;
    cout << "Enter the number " << endl;
    cin >> n;
    cin >> m;
    cout << " squre of root : " << sqrt(n) << endl; //sqrt() is a predifined function in cmath library
    cout << " cube  of root : " << cbrt(m) << endl; //cbrt() is a predifined function in cmath library

    return 0;
}