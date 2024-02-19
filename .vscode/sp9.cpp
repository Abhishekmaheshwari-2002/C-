// program for remove character space and other numbers in  string
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
  // create two  variable for takeing string
  string str, str2; //  it is not a compulsoary for use "  str2="" use because of we want to add every characters"
  cout << " Enter the string " << endl;
  getline(cin, str);
  for (int i = 0; i < str.size(); ++i)
  {
    if ((str[i] >= 97 && str[i] <= 122) || (str[i] >= 65 && str[i] <= 90)) // it is a condition of check characters is alphabet
    {
      str2 = str2 + str[i]; // it is a mehtod of which we want
    }
    }
  // str = str2;// it is a use less  because of it is not a necessary
  cout << " string after remove characters " << str2 << endl;

  // char str[100], str2[100];
  // int j = 0;
  // cout << " Enter the string " << endl;
  // gets(str);
  //  for (int i = 0; str[i]!='\0'; ++i)
  // {
  //   if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
  //   {
  //   str2[j++] = str[i];
  //   }
  // }
  // str2[i] = '\0';
  // cout << " string after remove characters " << str2 << endl;
  return 0;
}