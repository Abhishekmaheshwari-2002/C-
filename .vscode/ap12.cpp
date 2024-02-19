//program for three dimenstional array
#include <iostream>
using namespace std;
int main()
{
    int i, j, k, a1[3][3][3];
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            for (int k = 0; k < 3; ++k)
            {
                cout << " Enter the  " << 1 + i++ << " element for 3 diementional array :  ";
                cin >> a1[i][j][k];
            }
        }
    }
    cout << " third diementional array : " << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            for (int k = 0; k < 3; k++)

            {
                // cout << " the array is [ " << i << "][" << j << "][" << k << "]"
                //  << " = " << a1[i][j][k] << " " << endl;

                cout << a1[i][j][k] << " ";
                if (k == 3 - 1)
                {
                    cout << endl;
                }
            }
        }
    }
    return 0;
}