//progrma for find frequency of characters in string
#include <iostream>
#include <string>
using namespace std;
int main()
{
    char ch[100];
    char check = 'm';
    cout << " Enter the charaters of string for check " << endl;
    cin.get(ch, 100);// this is a way of take string as a characters 
    int count = 0;

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if (ch[i] == check)
        {
            ++count;// this is a check for how many number is same 
        }
    }
    cout << " Number of m is  : " << count << endl;
    // string st;
    // int count = 0;
    // char check = 'm';
    // cout << " Enter the string for check " << endl;
    // getline(cin, st);
    //  for (int i = 0; i < st.  size(); i++)
    // {
    //     if (st[i] == check)
    //     {
    //         ++count;
    //     }
    // }
    // cout << " Number of m is  : " << count << endl;
    return 0;
}