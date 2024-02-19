#include <iostream>
using namespace std;
template <class T1 = int, class T2 = char, class T3 = float> // it is a default parameterised template of class
class temp
{
public:
    T1 a;
    T2 b;
    T3 c;
    temp(T1 a1, T2 b1, T3 c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }
    void show_data()
    {
        cout << " The vlaue of a is :" << a << endl;
        cout << " The vlaue of b is :" << b << endl;
        cout << " The vlaue of c is :" << c << endl;
    }
};
int main()
{
    temp<char, float, int> ab1('A', 12.23, 3641);
    ab1.show_data();
    return 0;
}