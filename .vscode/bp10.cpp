//program for raise X to power N //
#include <iostream>
using namespace std;
int main()
{
    int X, N, P = 1;
    cout << "Enter the value of X and N " << endl;
    cin >> X;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        P = P * X;//it is a mehtod of calculte to  X to the power 
    }
    cout << " The answer of power " << X << " of " << N << " is : " << P << endl;

    return 0;
}