// c++ program for break and continue keyword

#include <iostream>
using namespace std;

int main()
{
    int i;
    for (int i = 1; i <= 10; i++)
    {
        if (i == 8)
        {
            break;
        }
        cout << i << endl;
    }

    return 0;
}

// #include <iostream>
// using namespace std;
// int main()
// {
//     int i;
//     for (int i = 1; i <= 10; i++)
//     {
//         if (i == 5)
//         {
//             continue;
//         }
//         cout << i << endl;
//     }

//     return 0;
// }
