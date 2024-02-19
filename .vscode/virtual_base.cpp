#include <iostream>
using namespace std;
class student
{
protected:
    int id;
    int roll_no;

public:
    void set_roll(int r, int i)
    {
        roll_no = r;
        id = i;
    }
    void show_roll(void)
    {
        cout << " Your roll number is :" << roll_no << endl;
        cout << " Your id  number is :" << id << endl;
    }
};
class test : virtual public student
{
protected:
    int maths;
    int hindi;

public:
    void set_marks(int m, int h)
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
    void set_score(int sc)
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
    result abhishek;
    abhishek.set_roll(8893, 124);
    abhishek.set_marks(83, 24);
    abhishek.set_score(4);
    abhishek.show_result();

    return 0;
}