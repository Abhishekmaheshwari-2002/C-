#include <iostream>
using namespace std;
class binary
{
private:
    string s;
    // void check(void);

public:
    void read(void);
    void check(void);
    void change(void);
    void show(void);
};
void binary ::read(void)
{
    cout << "enter the binary number " << endl;
    cin >> s;
}
void binary::check(void)
{
    for (int i = 0; i < s.length(); i++)

    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {

            cout << " Your binary format is absoulitely wrong" << endl;
            exit(0);
        }
    }
}
void binary ::change(void)
{
    // check();

    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
    cout << " your  binary number is change " << endl;
}
void binary ::show(void)
{
    cout << " your  binary number is here " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    binary bin;
    bin.read();
    bin.check();
    bin.show();
    bin.change();
    bin.show();

    return 0;
}