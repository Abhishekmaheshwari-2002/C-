#include <iostream>
using namespace std;
class base1
{
public:
    void hello(void)
    {
        cout << "Hello world " << endl;
    }
}; 
class base2
{
public:
    void hello(void)
    {
        cout << "Good hello " << endl;
    }
};
class dervied : public base1, public base2
{
    int c;

public:
    void hello()
    {
        base1 ::hello();
    }
};

int main()
{
    base1 a;
    a.hello();
    base2 b;
    b.hello();
    dervied c;
    c.hello();
    return 0;
}