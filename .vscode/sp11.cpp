//program for convert into lowercase  to upper case
#include <iostream>
#include <cstring>
using namespace std;
int main()
// this program is basicaly based on ASCII values
{
      string str = " hello name";
      for (int i = 0; i < str.size(); i++)
      {
            // 97 to 122 is a ASCII values for lowercase
            if ((str[i] >= 97 && str[i] <= 122))
            {
                  str[i] = str[i] - 32; // 32 is the diffrence for converting lowercase to upercase with the help of this think
            }
      }
      cout << " IN lower case  to upercase " << endl;
      cout << str << endl;
      ;
      return 0;
}