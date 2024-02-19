//program for convert into inchies into yard and feet //
#include <iostream>
using namespace std;
int main()
{
    float f, y;
    int i;
    cout << " Enter the inchies to convert into yard " << endl;
    cin >> i;
    cout << "inchies into yard " << endl;
    y = i / 36;
    cout << y << endl;

    cout << "inchies into feet " << endl;
    f = i / 12;
    cout << f << endl;

    return 0;
}