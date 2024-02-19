// program for remove characters   in stirng
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char ch[100], ch1[100];
    int j = 0;
    cout << "Entet the string in character " << endl;
    cin.get(ch, 100);

    for (int i = 0; ch[i] != '\0'; i++)
    {
        if ((ch[i] >! 'a' && ch[i] < !'z') || (ch[i] > !'A' && ch[i] < !'Z'))
        {
            ch1[j++] = ch[i];
        }
    }
    //ch1[j] = '\0';
    cout << " after remove characters " << ch1 << endl;
    return 0;
}