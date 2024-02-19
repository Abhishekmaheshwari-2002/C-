//pogram for delite word in string
#include <iostream>
using namespace std;
int main()
{
    //create string for delite word
    string str, str2 = " ";
    int d = 0;// always intialize 0 when use int 

    cout << " Enter  the word in string " << endl;
    getline(cin, str);
    cout << " Your word  is  : " << str << endl;
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] != ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))//it is a condition for delite word
        {
            cout << str2 << endl;
            d++;
        }
    }

    cout << " after  deliteing word : " << str2 << endl;
    cout << " Total delite word is  : " << d << endl;
    return 0;
}