#include <iostream>
#include <string>
using namespace std;

class english
{
private:
    int typeno;
    string tensename;
    int typeoftype;

public:
    void typeget(void);
    void typeoftypename(void);
};

void english ::typeget(void)
{
    {
        cout << " enter the number of  type of tense " << endl;
        cin >> typeno;
        if (typeno <= 3)
        {
            cout << " your input is rights" << endl;
        }
        else
        {
            cout << "your input is  wrong " << endl;
        }
    }

    cout << " \n enter the name  of type 1   " << endl;
    cin >> tensename;
    cout << " enter the name  of type 2   " << endl;
    cin >> tensename;
    cout << " enter the name  of type 3   " << endl;
    cin >> tensename;
    cout << " enter the name  of type 4   " << endl;
    cin >> tensename;
    getchar;
}
void english ::typeoftypename(void)
{
    // cout << " if you want to check type of type name  press   1 " << endl
    //      << " if you want to check type of type name  press   2 " << endl
    //      << " if you want to check  type of type name  press   3 " << endl;
    // cin >> typeoftype;
    switch (typeno)
    {
    case 1:
        cout << " present indefinite tense \n"
             << "present continous \n"
             << "present perfect \n"
             << "present perfect continous\n";
        break;
    case 2:
        cout << "past indefinite tense \n"
             << "pastcontinous \n"
             << "past perfect \n "
             << "past perfect continous\n ";
        break;
    case 3:
        cout << "future indefinite tense \n"
             << "futurecontinous \n"
             << "future perfect \n "
             << "future perfect continous\n ";
        break;

    default:
        cout << " you press  wrong  intput " << endl;
        break;
    }
}

int main()
{
    english tense;
    tense.typeget();
    tense.typeoftypename();

    return 0;
}