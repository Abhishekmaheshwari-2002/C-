//C++ program to add two number  by Call address using class 
#include <iostream>
using namespace std;
class sum
{
public:
    int c;
    int add(int *x, int *y)
    {
        c = *x + *y;
    }
    void show(void)
    {
        cout << " The add a and b is : " << c << endl;
    }
};
int main()
{
    sum abc;
    int a = 13;
    int b = 74;
    abc.add(&a, &b);
    abc.show();
    return 0;
}
// //C++ program to add two time by Call by reference
// #include <iostream>
// using namespace std;
// class sum
// {
// public:
//     int c;
//     int add(int &x, int &y)
//     {
//         c = x + y;
//     }
//     void show(void)
//     {
//         cout << " The add a and b is : " << c << endl;
//     }
// };
// int main()
// {
//     sum abc;
//     int a = 13;
//     int b = 74;
//     abc.add(a, b);
//     abc.show();
//     return 0;
// }

//C++ program to add two time by Call by value
// #include <iostream>
// using namespace std;
// class sum
// {
// public:
//     int c;
//     int add(int x, int y)
//     {
//         c = x + y;
//     }
//     void show(void)
//     {
//         cout << " The add a and b is : " << c << endl;
//     }
// };
// int main()
// {
//     sum abc;
//     int a = 13;
//     int b = 74;
//     abc.add(a, b);
//     abc.show();
//     return 0;
// }