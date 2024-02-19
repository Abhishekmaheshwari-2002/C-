// program for multiple two matrix using array
#include <iostream>
using namespace std;
int main()
{
    // create 2d array
    int a[3][4], b[4][4], multi[3][4], i, j1, k;
    // taking element of 2d array 
    // us for loop  just like this
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j)
        {
            cout << " Enter the [" << i + 1 << "][" << j + 1 << "]element of array A " << endl;
            cin >> a[i][j];
        }

    for (int i = 0; i < 4; ++i)
        for (int j = 0; j < 4; ++j)
        {
            cout << " Enter the [" << i + 1 << "][" << j + 1 << "]element of array b " << endl;
            cin >> b[i][j];
        }
// intilaze o 
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j)
        {
            multi[i][j] = 0;
        }
    cout << "Multiple of  the element of array  " << endl;
    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j)
            for (int j1 = 0; j1 < 4; ++j)
            {
                multi[i][j] += a[i][j1] * b[j1][j];
            }

    for (int i = 0; i < 3; ++i)
        for (int j = 0; j < 4; ++j)

        {
            cout << " " << multi[i][j] << "  ";
            if (j == 3 - 1)// it is use for print diemnesonal array in matric form  
            {
                cout << endl;
            }
        }

    return 0;
}
