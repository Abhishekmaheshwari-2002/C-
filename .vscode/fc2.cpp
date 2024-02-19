// C++ program to find greatest b/w 3 nos. by using class
#include <iostream>
using namespace std;
class grt
{

public:
    int n1, n2, n3;
    void get(void) // it take input from the user
    {
        cout << "Enter the  three number " << endl;
        cin >> n1 >> n2 >> n3;
    }
    int grtnum(int p, int q, int r)
    {
        if (n1 > n2 && n1 > n3)

        {
            cout << " Grater number is : " << n1 << endl;
        }
        else if (n2 > n1 && n2 > n3)
        {
            cout << " Grater number is : " << n2 << endl;
        }
        else
        {
            cout << " Grater number is : " << n3 << endl;
        }
    }
};
int main()
{
    int n1, n2, n3;
    grt g;
    g.get();
    g.grtnum(n1, n2, n3);
    return 0;
}