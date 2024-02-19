//program for swap two string
#include <iostream>
using namespace std;
int main()
{
    // create two string for swaping
    string str1, str2, temp;
    cout << " Enter the string 1 " << endl;
    getline(cin, str1);
    cout << " string 1 is  : " << str1 << endl;
    cout << " Enter the string 2" << endl;
    getline(cin, str2);
    cout << " string 2 is  : " << str2 << endl;
    // the process of swaping two string
    temp = str1;
    str1 = str2;
    str2 = temp;
    // here the result after swaping string
    cout << " swap string  str1 to str2 " << endl;
    cout << " str1 is : " << str1 << endl;
    cout << " str2 is : " << str2 << endl;
    return 0;
}