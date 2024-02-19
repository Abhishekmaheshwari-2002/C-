#include <iostream>
using namespace std;
template <class T> // it is a single parameterized class of templates
class temp
{
public:
    T a;

    temp(T a1)
    {
        a = a1;
    }
    void show_data1()
    {
        cout << " The intiger value of a is :" << a << endl;
    }
    void show_data2()
    {
        cout << " The float value of a is :" << a << endl;
    }
    void show_data3()
    {
        cout << " The char value of a is :" << a << endl;
    }
    void show_data4()
    {

        cout << " The long  intiger value of a is :" << a << endl;
    }
};
int main()

{

    temp<int> abhi1(10);
    //abhi.set_data(10);
    abhi1.show_data1();

    temp<float> abhi2(25.63);
    //abhi.set_data(25.63);
    abhi2.show_data2();

    temp<char> abhi3('abhishek');
    // // abhi.set_data('abhishek');
    abhi3.show_data3();

    temp<long int> abhi4(1345134);
    // abhi.set_data(134310541);
    abhi4.show_data4();

    return 0;
}

// // ................... // it is multiple parameterised class of template//......................
// #include <iostream>
//     using namespace std;
// template <class T1, class T2> // it is a multiple parameterized class of templates
// class temp
// {

// public:
//     T1 a1;
//     T2 a2;

//     temp(T1 n1, T2 m2)
//     {
//         a1 = n1;
//         a2 = m2;
//     }
//     void show()
//     {
//         cout << " The   value of a1 is : " << a1 << endl;
//         cout << " The   value of a2 is : " << a2 << endl;
//     }
// };
// int main()
// {
//     temp<char, float> obj('a', 12.35); //it is multiple datatype convert object
//     obj.show();
//     return 0;
// }