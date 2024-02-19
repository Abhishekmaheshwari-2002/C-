// program for count word in strig
#include <iostream>
using namespace std;
int main()
{
    //create string for count word  
    string str;
    int c = 0;// always intialize 0 when use int 
    cout << " Enter the word " << endl;
    getline(cin, str);
    for (int i = 0; i < str.size(); i++)
    {
        if (str[i] == ' ')// it is a jsut like count space 
        {
            c++;
        }
    }
    cout << " total word : " << c + 1 << endl;// if did'nt use +1 so it just like a count space 
 // all program is same as count space only diffrenc is +1 
    return 0;
}