//program for string is pailindrom or not
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    //create variables for inputs values
    char str[100];
    string str2;
    int i, len = 0;
    //     //accept the input in string in characters
    cout << " Enter the string in a char style " << endl;
    gets(str);
    // strlen(str)-1 is used because for loop is always run 0 to n thats why we used and stelen () is a function for   conunt length
    len = strlen(str) - 1;
    //     // len = strlen(str);
    //     //process is start to convert string into rivers
    //     // for (int i = len-1; i > 0; i--)
    for (int i = len; i >= 0; i--)
    {
        // here is a  result of your hard work
        cout << str[i];
    }
    str2 = str;
    if (str == str2)
    {
        cout << " This string is pailndrom " << endl;
    }
    else
    {
        cout << " This string is  not  pailndrom " << endl;
    }

    //string str[100], str2;
    ///  int i, len = 0;
    //  cout << " Enter the string is for check it is pailindrom or not " << endl;
    //  getline(cin, str);
    //  len = str.size() - 1;
    //  for (int i = len; i >= 0; i--)
    //  {
    // //     str2 = str2 + str[i];
    // }

    // str2 = str;

    return 0;
}
