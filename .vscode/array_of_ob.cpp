#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    static int salary;

public:
    void setdata(void)
    {
        cout << " enter the id no " << endl;
        cin >> id;
    }

    void getdata(void)
    {

        cout << " The id no is :" << id << endl;
        salary = salary + 10;
        cout << " the salary is :" << salary << endl;
    }
};

int employee ::salary = 100;

int main()
{
    employee abc[5];
    for (int i = 0; i < 5; i++)
    {
        abc[i].setdata();
        abc[i].getdata();
    }

    return 0;
}