#include <iostream>
using namespace std;
template <class T1, class T2>
float func(T1 n, T2 m)
{
    float multi;
    multi = n * m / 2;
    return multi;
}
int main()
{
    float a, b, c;
    cout << " enter the value of  a and b is :" << endl;

    scanf("%f%f", &a, &b);
    c = func(a, b);
    printf(" The vlue of multiple is :%f", c);
    return 0;
}