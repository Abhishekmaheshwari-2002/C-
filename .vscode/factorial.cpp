//C++ program to find factorial by defining functions outside the class
#include <iostream>
using namespace std;
class fac1
{
private:
    int n, f = 1;

public:
    int fac(int n)
    {
        if (n > 0)
        {
            for (int i = 0; i < n; i++)
            {
                f *= n;
                return f;
            }
        }
        else
        {
            cout << " your input is worong " << endl;
        }
    }
};
int main()
{
    fac1 ab;
    cout << " factorial is : " << endl;
    ab.fac(3);
    return 0;
}