//progrm for   pritnig  riverse string
#include <iostream>
#include <cstring>
// #include <string>
using namespace std;
int main()
{
    // create variables for inputs values
    char str[100];
    int i, len = 0;
    //accept the input in string in characters
    cout << " Enter the string in a char style " << endl;
    gets(str);
    //strlen(str)-1 is used because for loop is always run 0 to n that's why we used and stelen () is a function for   count length
    len = strlen(str) - 1;
    //len = strlen(str);
    cout << " Riverse string  is here : ";
     //process is start to convert string into rivers
     //for (int i = len-1; i > 0; i--)
    for (int i = len; i >= 0; i--)
    {
        //here is a  result of your hard work
         cout << str[i];
    }
    return 0;
}
//this is 2nd way to riverse stirng using  swaip funtion

// {
//     string str;
//     int temp, i, j, len;
//     cout << "Enter the stirng for riverse " << endl;
//     getline(cin, str);
//     len = str.size() - 1;
//     for (int i = 0; i < len; i++, len--)
//     {
//         temp = str[i];     
//         str[i] = str[len];
//         str[len] = temp;
//     }
//     cout << " The riveres string is : " << str;
// }
