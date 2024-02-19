//Multi level intheritaince program 
#include <iostream>
using namespace std;
class student

{
protected:
    int id;
    int roll;

public:
    void setroll(int i, int r)
    {
        id = i;
        roll = r;
    }
    void showroll(void)
    {
        cout << " the id   no is " << id << endl;
        cout << " the roll no is " << roll << endl;
    }
};
class exam : public student
{
protected:
    int maths;
    int hindi;

public:
    void getnum(int m, int h)
    {
        maths = m;
        hindi = h;
    }
    void shownum(void)
    {
        cout << " The number in maths " << maths << endl;
        cout << " The number in hindi " << hindi << endl;
    }
};
class result : public exam
{
public:
    void display(void)
    {
        showroll();
        shownum();
        cout << " your percentage is " << (maths + hindi) / 2 << "%" << endl;
    }
};

int main()
{
    result rohan;
    rohan.setroll(13, 1234);
    rohan.getnum(45, 95);
    rohan.display();

    return 0;
}