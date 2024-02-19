#include <iostream>
using namespace std;
template <class T>
class tom
{
public:
    int a1;
    T set_data(T a)
    {
        a1 = a;
    }
    void show_data();
    // {
    //     cout << " The value of a is " << a1 << endl;
    // }
};
template <class T>//it is a using scope resoultion in template class 
void tom<T>::show_data(void)//it is a using scope resoultion in template class
{

    cout << " The value of a is " << a1 << endl;
}
//there are more than templaterised function , it meanas they will show overloading function
template <class T> // it is templaterised function
void func1(T a)
{
    cout << " i am  templatrised  func()   " << a << endl;
}
void func(int a) //simple function will take  first prirorty
{
    cout << " i am  without templatrised  func   a is : " << a << endl;
}
// this condition apply when normal and speical function name  is name
template <class T> // it is templaterised function
void func2(T a)
{
    cout << " i am  templatrised  func()   " << a << endl;
}
int main()
{
    tom<int> A;
    A.set_data(11);
    A.show_data();

    func(10); //exatly match func will call first
    func1(102);
    func2(1110);

    return 0;
}