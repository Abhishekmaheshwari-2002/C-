//program for finding divisior of number.//
#include <iostream>
using namespace std;
int main()
{
    int dv, di, r, q;
    cout << " Enter the value of divinded " << endl;
    cin >> dv;
    cout << " Enter the value of qutoient  " << endl;
    cin >> q;
    cout << " Enter the value of reaminder " << endl;
    cin >> r;
    cout << " Divisior = divinded - remainder /qutoient " << endl;
    di = (dv - r) / q;// it is a formula of find divisior //
    cout << " Divisior = " << di << endl;
    return 0;
}