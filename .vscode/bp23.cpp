//program for print table any number.......//
#include <iostream>
using namespace std;
int main()
{
    int t;
    cout << " Enter the number which table do you want " << endl;
    cin >> t;
    cout << " Here is a table : " << endl;
    for (int i = 1; i <= 10; i++)

    {
        cout << t << " x " << i << "=" << t * i << endl;
    }

    return 0;
}