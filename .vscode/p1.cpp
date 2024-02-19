#include <iostream>
using namespace std;
class sum
{
private:
    int a, b;

public:
        sum(int n, int m) : a(n), b(m) {}
    void sum1()
    {
        cout << "the sum is " << a + b << endl;
    }
};
int main()
{
    sum a(10, 25);
    a.sum1();
    return 0;
}