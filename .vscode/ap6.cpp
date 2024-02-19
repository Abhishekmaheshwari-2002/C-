// program for finding  duplicats elemnet in array
#include <iostream>
using namespace std;
int main()
{
    int i, j, arr[100];
    for (int i = 0; i < 5; i++)
    {
        // create an array for finding duplcates element 
        cout << " Enter the element of array  " << endl;
        cin >> arr[i];
    }
    // using two loops because of copmare two element for check element is duplicate or not 
       for (int i = 0; i < 5; i++)
        for (int j = i + 1; j < 5; j++)
        {
            if (arr[i] == arr[j])
            {

                cout << " duplicat element in array : " << arr[i] << endl;
            }
        }

    return 0;
}