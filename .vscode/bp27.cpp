// program for find largest number among three number //
#include <iostream>
using namespace std;
int main()
{
    int lg1, lg2, lg3;
    cout << " Enter the  three large  number " << endl;
    cin >> lg1 >> lg2 >> lg3;
    if (lg1 > lg2 && lg1 > lg3)//it is a first  condition   of finding of largest number of three number 
    {
        cout << " largest number of three number is : " << lg1 << endl;
    }
    else if (lg2 > lg1 && lg2 > lg3)//it is a second condition   of finding of largest number of three number
    {
        cout << " largest number of three number is : " << lg2 << endl;
    }
    else
    {
        cout << " largest number of three number is : " << lg3 << endl;
    }

    return 0;
}