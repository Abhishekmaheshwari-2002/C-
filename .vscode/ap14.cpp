//program for subtract two matrix
#include <iostream>
using namespace std;
int main()
{
    //create 3array which is two dimensional array
    int r, c, a[100][100], b[100][100], sub[100][100], i, j;
    cout << " Enter the rows for matrix " << endl;
    cin >> r; // it is a row which is enterd by the users
    cout << " Enter the columns for matrix " << endl;
    cin >> c; // it is a row which is enterd by the users
    // takeing element of first matrix
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            cout << " Enter the a [" << i + 1 << j + 1 << "]"
                 << " : ";
            cin >> a[i][j];
        }
    // takeing element of two matrix
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            cout << " Enter the b [" << i + 1 << j + 1 << "]"
                 << " : ";
            cin >> b[i][j];
        }
    // now  add the two a and b matrix
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
        {
            sub[i][j] = a[i][j] - b[i][j];
        }
    cout << " subtraction  of two matrix : " << endl;
    // now display the subtraction of matrix
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)

        {

            cout << sub[i][j] << " ";
            if (j == c - 1)
            {
                /* code */
                cout << endl;
            }
        }

    return 0;
}