// program for convert into  upper case to  lowercase
#include <iostream>
#include <cstring>
using namespace std;
int main()
// this program is basicaly based on ASCII values
{
    string str = " HELLO  MY NAME IS ABHSIEH MAHESHWARI";
    for (int i = 0; i < str.size(); i++)
    {
        // 65 to 90 is a ASCII values for uppercase
        if ((str[i] >= 65 && str[i] <= 90))
        {
            str[i] = str[i] + 32; // 32 is the diffrence for converting upercase to lowercase  with the help of this think
        }
    }
    cout << " IN  upercase  to lowercase " << endl;
    cout << str << endl;

    return 0;
}