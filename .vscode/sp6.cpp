//  program for concatenate for string
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // create a two string variable for take string in character
    char ch1[100], ch2[100];
    cout << " Enter the ch1 of string " << endl;
    gets(ch1);
    cout << " Enter the ch2 of string " << endl;
    gets(ch2);
    cout << " joind string is here " << endl;
    // strcat( ) is function for joining two string
    cout << " The string of characters is :  " << strcat(ch1, ch2) << endl;

    // create a two string variable for take string in character

    //     string str1, str2;
    //     cout << " Enter the str1 of string " << endl;
    //     getline(cin, str1);
    //     cout << " Enter the str2 of string " << endl;
    //     getline(cin, str2);
    //     cout << " joind string is here " << endl;
    //     cout << " The string is :  " << str1 + str2 << endl;
    return 0;
}