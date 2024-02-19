#include <iostream>
using namespace std;
class shop
{
private:
    int itmid[100];
    int itmprize[100];
    int counter;

public:
    void itmcounter(void);
    void setprize(void);
    void listprize(void);
};
void shop::itmcounter(void)
{
    counter = 0;
}
void shop ::setprize(void)
{
    cout << "enter the item id of item no " << counter + 1 << endl;
    cin >> itmid[counter];
    cout << "enter the item prize  of item no " << counter + 1 << endl;
    cin >> itmprize[counter];
    counter++;
}
void shop::listprize(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The item id no " << itmid[i] << " is prize of " << itmprize[i] << endl;
    }
}

int main()
{
    shop dukan;
    dukan.itmcounter();
    dukan.setprize();
    dukan.setprize();
    dukan.setprize();
    dukan.listprize();
    return 0;
}