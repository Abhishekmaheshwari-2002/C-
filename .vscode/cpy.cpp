#include <iostream>
using namespace std;

class show
{
    
private:
    int a;
public:
    show()
    {
        a = 1;
    }
    show(int n)
    {
        a = n;
    }
    show(show &num) //it is use for copy constructor
    {
        a = num.a;
    }
    void showdata(void)
    {
        cout << "The value of a is : " << a << endl;
    }
};

int main()
{
    show a, b(15), c;
    a.showdata();
    b.showdata();
    show c1(b);
    c1.showdata();
    // show c1 = b;
    // c1.showdata();
    return 0;
}