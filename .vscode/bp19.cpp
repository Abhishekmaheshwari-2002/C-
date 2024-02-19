//program for check char is vowel or consonant ../
#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << " Enter the char for check  it is vowel or consonant or not " << endl;
    cin >> ch;
    switch (ch)
    {
    case 'a':
        cout << " This is a vowel " << endl;
        break;

    case 'e':
        cout << " This is a vowel " << endl;
        break;

    case 'i':
        cout << " This is a vowel " << endl;
        break;

    case 'o':
        cout << " This is a vowel " << endl;
        break;

    case 'u':
        cout << " This is a vowel " << endl;
        break;

    default:
        cout << " This is a consonant" << endl;
        break;
    }
    return 0;
}