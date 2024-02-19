#include <iostream>
using namespace std;
class AM
{
private:
    int a;

public:
    // AM &setdata(int a)
    void setdata(int a)
    {
        this->a = a;
        // (*this).a = a;
        // return (*this);
    }
    void getdata()
    {
        cout << " The vlaue of a is :" << a << endl;
    }
};
int main()
{
    AM p;
    p.setdata(10);
    p.getdata();
    // p.setdata(10).getdata();
    return 0;
}