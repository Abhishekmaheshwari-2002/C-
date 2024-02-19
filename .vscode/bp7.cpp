/// program for generate any random number ..///
#include <iostream>
using namespace std;
int gr(int a)
{
    srand(unsigned(NULL)); // this function have to intilize befor rand()
    return rand();         // it is a speical function for generate random number
}
int main()
{
    int a;
    cout << "The Random number :" << gr(100) << endl;
    return 0;
}