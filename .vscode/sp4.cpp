// program for  compare two string
#include <iostream>
#include <string>
using namespace std;
void comparestring(string s1, string s2)
{

    if (s1.length() == s2.length())//it is a compare of two string 
    {
        cout << " S1 is equal to S2 " << endl;
    }
    else if (s1.length() < s2.length())
    {
        cout << " S2 is grater then S1 " << endl;
    }
    else if (s1.length() > s2.length())
    {
        cout << " S1 is grater then S2 " << endl;
    }
    else if (s1.length() != s2.length())
    {
        cout << " S1 is not equal to S2 " << endl;
    }
}

int main()
{
    string s1;
    string s2;
    cout << " Enter the string s1 " << endl;
    getline(cin, s1);

    cout << " Enter the string s2 " << endl;
    getline(cin, s2);
    comparestring(s1, s2);
    return 0;
}
