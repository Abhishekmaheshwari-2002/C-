//program for delite vowel in string
#include <iostream>
using namespace std;
int main()
{
    //create string for delite vowel
    string str, str2;

    cout << " Enter string " << endl;
    getline(cin, str);
    cout << " Your string  is  : " << str << endl;
    for (int i = 0; i < str.size(); ++i)
    {
        if ((str[i] != 'a' && str[i] != 'e' && str[i] != 'i' && str[i] != 'o' && str[i] != 'u' && str[i] != 'A' && str[i] != 'E' && str[i] != 'I' && str[i] != 'O' && str[i] != 'U'))
        {
            str2 = str2 + str[i];
        }
    }

    cout << " after  deliteing vowel : " << str2 << endl;

    return 0;
}