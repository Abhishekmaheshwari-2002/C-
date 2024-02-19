// C++ program to find factorial by using class
#include <iostream>
using namespace std;
class fac
{
private:
    int n;

public:
    int fac1(int n)
    {
        int f = 1;
        if (n > 0)
        {
            for (int i = 1; i <= n; i++)
            {
                f *= i;
            }
        }
        else
        {
            cout << " Your Input is wrong Either  0 " << endl;
        }
        return f;
    }
};
int main()
{
    fac ab;
    int a;
    cout << "Enter the number for finding factorial " << endl;
    cin >> a;

    cout << " Factorial is  : " << ab.fac1(3) << endl;
    return 0;
}