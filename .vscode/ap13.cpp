//program for two diemensional array
#include <iostream>
using namespace std;
int main()
{
    //create 2d array
    int a[4][3], i, j;
    for (int i = 0; i < 4; i++)
    {
        // taking 2d array  of element
        for (int j = 0; j < 3; j++)
        {
            cout << " Enter  2d array of element " << i + 1 << " : ";
            cin >> a[i][j];
        }
    }
    // diplay 2d array of an element 
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {

            // cout << "  2d array of element [" << i << "][" << j << "] : " << a[i][j] << endl;
            cout << a[i][j] << " ";
            if (j == 3 - 1)
            {
                cout << endl;
                /* code */
            }
        }
    }
    return 0;
}