//C++ program to find reverse of number by using class
#include <iostream>
using namespace std;
class riverse
{
public:
    int n;
    void get(void)
    {
        cout << " Enter the number " << endl;
        cin >> n;
    }
    int riv(int n1)
    {
        if (n == 0)
        {
            cout << " your input is Error " << endl;
        }
        else
        {
           for (int i = n; i >= 0; i--)
            {
                cout << " Riverse number is : " << i << endl;
            }
        }
    }
};
int main()
{
    int n;
    riverse ri;
    ri.get();
    ri.riv(n);

    return 0;
}