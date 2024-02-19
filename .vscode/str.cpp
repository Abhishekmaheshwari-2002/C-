#include <iostream>
using namespace std;
struct moblie
{
    char company;
    int prize;
    int quantity;
};
int main()
{
    struct moblie p1 = {'f', 10000, 100};
    struct moblie p2 = {'n', 25000, 100};
    struct moblie p3 = {'m', 3600000, 100};

    cout << "Details of moblie no. is p1 company name :" << p1.company << endl;
    cout << "Details of moblie no. is p1 prize  :" << p1.prize << endl;
    cout << "Details of moblie no. is p1 quanitity :" << p1.quantity << endl;

    cout << "Details of moblie no. is p2  company name :" << p2.company << endl;
    cout << "Details of moblie no. is p2 prize:" << p2.prize << endl;
    cout << "Details of moblie no. is p2 quanitity:" << p2.quantity << endl;

    cout << "Details of moblie no. is p3 company name  :" << p3.company << endl;
    cout << "Details of moblie no. is p3 prize:" << p3.prize << endl;
    cout << "Details of moblie no. is p3 quanitity:" << p3.quantity << endl;

    return 0;
}