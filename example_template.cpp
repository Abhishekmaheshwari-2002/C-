#include <iostream>
using namespace std;

template <class A>
class vector
{
public:
    A *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new A[size];
    }
    // int dot(vector &v)                                  // you can intialize passing object so many types
    // A dot(vector v)
    A dot(vector v, vector m)
    {
        A d = 0;
        for (int i = 0; i < size; i++)
        {
            //1// d += this->arr[i] * v.arr[i];
            //2. // d += arr[i] * v.arr[i];
            /*3*/ d += v.arr[i] * m.arr[i];
        }
        return d;
    }
};
int main()
{
    vector<float> v1(3);
    v1.arr[0] = 0;
    v1.arr[1] = 2;
    v1.arr[2] = 1;

    vector<float> v2(3);
    v2.arr[0] = 10;
    v2.arr[1] = 1;
    v2.arr[2] = 1;
    float a = v1.dot(v1, v2);
    // float a = v1.dot(v);
    cout << " The product of vector  : " << a << endl;
    return 0;
}