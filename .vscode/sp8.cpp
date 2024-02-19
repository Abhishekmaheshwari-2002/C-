//program for find the number of vowel ,consonant , digit , white space
#include <iostream>
using namespace std;
int main()
{
    // str is input fot takeing string
    // char str[100];
    string str;
    int v, c, d, s;
    v = c = d = s = 0;
    cout << " Enter the string " << endl;
    getline(cin, str);
    // gets(str);
    //    for (int i = 0; str[i] != '\0'; ++i)
    // here is  all the condition of this program
    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            v++;
        }
        else if (str[i] >= 'a' && str[i] <= 'z')
        {
            c++;
        }
        else if (str[i] >= '0' && str[i] <= '9')
        {
            d++;
        }
        else if (str[i] == ' ')
        {
            s++;
        }
    }
    cout << "vowels   : " << v << endl
         << "consonat : " << c << endl
         << "Digit    : " << d << endl
         << "space    : " << s << endl;
    return 0;
}