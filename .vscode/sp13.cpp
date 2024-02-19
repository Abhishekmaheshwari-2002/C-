// program for convert into  upper case to  digit
#include <iostream>
#include <cstring>
using namespace std;

int main()
// this program is basicaly based on ASCII values
{
    string str = " ABCDEFGHI";
    for (int i = 0; i < str.size(); i++)
    {
        // 65 to 90 is a ASCII values for uppercase
        if ((str[i] >= 65 && str[i] <= 90))
        {
            str[i] = str[i] - 17; // 17 is the diffrence for converting upercase to digit with the help of this
        }
    }
    cout << " IN  upercase  to digit  " << endl;
    cout << str << endl;

    return 0;
}

// // program for convert into  lower case to  digit
// #include <iostream>
// #include <cstring>
// using namespace std;
// int main()
// // this program is basicaly based on ASCII values
// {
//     string str = " abcdefgi";
//     for (int i = 0; i < str.size(); i++)
//     {
//         // 97 to 122 is a ASCII values for uppercase
//         if ((str[i] >= 97 && str[i] <= 122))
//         {
//             str[i] = str[i] - 49; // 49 is the diffrence for converting upercase to digit with the help of this
//         }
//     }
//     cout << " in upercase to digit  " << endl;
//     cout << str << endl;

//     return 0;
// }