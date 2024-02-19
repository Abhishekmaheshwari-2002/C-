//program for copy string s1 to s2
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    // s1 or s2 string is created for copy 
    string s1 = " hello sir ";
    string s2;
    s2 = s1;// it is a method of copy string 
    cout << " S2 string is  : " << s2 << endl;
    //  function is always use in char datatype 
    // char s1[100] = " my name is abhsiehk ";
    // char s2[100];
    // cout << " S2 stirng is : " << strcpy(s2, s1);// strcpy() is function for copy string s2 to s1 
    return 0;
}