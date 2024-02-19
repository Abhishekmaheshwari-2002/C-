#include <iostream>
using namespace std;

class item
{
    int item_no;
    float price;

public:
    void setdata(int i, int p)
    {
        item_no = i;
        price = p;
    }
    void getdata()
    {
        cout << " The code of item no is " << item_no << endl;
        cout << " The price of item  is " << item_no << endl;
    }
};
int main()
{
    int a, size = 4;
    float b;
    item *ptr = new item[size];
    item *ptr2 = ptr;
    for (int i = 0; i < size; i++)
    {
        cout << "enter the price and code of the item " << i + 1 << endl;
        cin >> a >> b;
        ptr->setdata(a, b);
        ptr++;
    }
    for (int j = 0; j < size; j++)
    {
         cout << "the price and code of the item " << j + 1 << endl;
        ptr2->getdata();
        ptr2++;
    }

    return 0;
}