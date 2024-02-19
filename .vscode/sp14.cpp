//program for remove space of string
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //create two  variable for takeing string
    string str, str2;
    cout << " Enter the string " << endl;
    getline(cin, str);
    for (int i = 0; i < str.size(); ++i)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) // it is a condition of check characters is alphabet
        {
            if (str[i] != ' ')
            {

                str2 = str2 + str[i]; // it is a mehtod of which we want
            }
        }
    }
    // str = str2;// it is a use less  because of it is not a necessary
    cout << " string after remove space " << str2 << endl;
    return 0;
}