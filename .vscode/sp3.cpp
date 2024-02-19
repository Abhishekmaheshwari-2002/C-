//program for find length of string
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string st;
    char ch[100];
    cout << " Enter the string " << endl;
    getline(cin, st);
    cout << " Enter the characters string " << endl;
    cin.get(ch, 100);
    // cout << "The length of string : " << st.size() << endl;
    cout << "The length of string : " << st.length() << endl; // it is a function of size of string    
    cout << "The length  characters string : " << strlen(ch) << endl;

    return 0;
}