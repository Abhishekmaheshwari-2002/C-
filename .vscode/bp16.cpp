//program for check charcrcter is digit , uppercase//
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter the char" << endl;
    cin >> ch;
    if (ch >= 48 && ch <= 57)//it is a  range of trace digit 
    {
        cout << ch << " is digit... " << endl;
    }
    else if (ch >= 65 && ch <= 90)//it is a  range of uppercase char 

    {
        cout << ch << "  is a uppercase  char " << endl;
    }
    else if (ch >= 97 && ch <= 122)//it is a  range of lower case char

    {
        cout << ch << " is lower case char " << endl;
    }
    else
    {
        cout << ch << " is a specal char " << endl;
    }

    return 0;
}