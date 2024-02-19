//program for transpose the matrix
#include <iostream>
using namespace std;
int main()
{
    // create a 2d array
    int a[3][2], t[3][2], i, j;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << " Enter the array " << endl;
            cin >> a[i][j];
        }
    }
    cout << " before transpose " << endl;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            cout << a[i][j] << " ";
            if (j == 2 - 1)
            {
                cout << endl; /* code */
            }
        }
    }
    // transpose  the arrray
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {

            t[j][i] = a[i][j]; // change the i to j and j to i for transpose
        }
    }
    cout << " after  transpose " << endl;

    for (int i = 0; i < 2; i++) // change the rows to column
    {
        for (int j = 0; j < 3; j++) //column to rows
        {
            cout << " " << t[i][j];
            if (j == 3 - 1)
            {
                cout << endl;
            }
        }
    }

    return 0;
}