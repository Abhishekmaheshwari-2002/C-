//program for even or odd //
#include <iostream>
using namespace std;
int main()
{
    int no;
    cout << "Enter the no..." << endl;
    cin >> no;
    if (no % 2 == 0)
    {
        cout << " it is a even number " << endl;
    }
    else
    {
        cout << " it is a odd number " << endl;
    }

    return 0;
}