#include <iostream>
#include <string>
using namespace std;
class love
{
    string a;

public:
    string set_love(string m)
    {
        a = m;
    }
    void show_reply_of_mahima(void)
    {
        cout << "Mahima said , I LOVE YOU ABHISHEK" << endl;
    }

    void show_reply_of_abhsihek(void)
    {
        cout << " I want to say something to you " << endl
             << a << endl;
    }
};
int main()
{
    love am;
    string m1;
    cout << " enter your love" << endl;
    getline(cin, m1);
    am.set_love(m1);
    cout << " abhsiehk said :" << m1 << endl;
    am.show_reply_of_mahima();
    am.show_reply_of_abhsihek();
    cout << "  mahima will you marry me !" << endl;
    cout << " if you want to 'yes' so press 1 " << endl;
    cout << " if you want to 'no' so press 2 " << endl;
    int am1;
    cout << " enter ,which you want " << endl;
    cin >> am1;
    switch (am1)
    {
    case 1:
        cout << "yes" << endl;
        break;

    case 2:
        cout << "no " << endl;
        break;

    default:
        cout << " sorry you dont deserv" << endl;
        break;
    }
    return 0;
}