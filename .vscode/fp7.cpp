// program for riverse string using recursion
#include <iostream>
#include <cstring>
using namespace std;
string riv(string str1)
{

    int i, temp;
    int len = str1.size() - 1;
    for (int i = 0; i < len; i++, len--)
    {
        temp = str1[i];
        str1[i] = str1[len];
        str1[len] = temp;
    }
    return str1;
}
int main()
{
    string str;
    cout << " Enter the string " << endl;
    getline(cin, str);
    cout << " Without rivrse string  :  " << str << endl;
    riv(str);
    cout << " after rivrse string  : " << str << endl;
    return 0;
}