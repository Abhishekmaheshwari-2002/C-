#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    // cin >> str;// it is wrong
    cout << "Enter the string" << endl;
    getline(cin, str);
    cout << "you enterd the " << str << endl;

    char str1[100];
    // cin >> str1[110]; //it is wrong
    cout << "Enter the char" << endl;
    cin.get(str1, 100);
    cout << "you enterd  char the " << str1 << endl;
    return 0;
}