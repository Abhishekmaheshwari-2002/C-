#include <iostream>
using namespace std;
class student
{
protected:
    int id;
    int roll_no;

public:
    student(int r, int i)//:id(i),roll_no(r)
    {
        roll_no = r;
        id = i;
    }
    void show_roll(void)
    {
        cout << " Your roll number is :" << roll_no << endl;
        cout << " Your id  number is :" << id << endl;
    }
    student() {}
};
class test : virtual public student
{
protected:
    int maths;
    int hindi;

public:
    test(int m, int h)//:maths(m),hindi(h)
    {
        maths = m;
        hindi = h;
    }
    void show_marks(void)
    {
        cout << " Your maths marks is :" << maths << endl;
        cout << " Your hindi marks is :" << hindi << endl;
    }
};

class sport : virtual public student
{
protected:
    int score;

public:
    sport(int sc)
    {
        score = sc;
    }

    void show_score(void)

    {
        cout << " Your score is : " << score << endl;
    }
};
class result : public test, public sport
{
protected:
    int total;

public:
    result(int a, int b, int c, int d, int e) : student(a, b), test(c, d), sport(e) {}
    void show_result(void)
    {
        show_roll();
        show_marks();
        show_score();
        total = maths + hindi + score;
        cout << " your total is " << total << endl;
    }
};
int main()
{
    result abhishek(12, 121, 95, 63, 10);
    abhishek.show_result();
    return 0;
}