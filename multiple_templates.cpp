
// // ................... // it is multiple parameterised class of template//......................
#include <iostream>
using namespace std;
template <class T1, class T2> // it is a multiple parameterized class of templates
class temp
{
public:
    T1 a1;
    T2 a2;
    temp(T1 n1, T2 m2)
    {
        a1 = n1;
        a2 = m2;
    }
    void show()
    {
        cout << " The   value of a1 is : " << a1 << endl;
        cout << " The   value of a2 is : " << a2 << endl;
    }
};
int main()
{
    temp<char, float> obj('a', 12.35); //it is multiple datatype convert object
    obj.show();
    return 0;
}