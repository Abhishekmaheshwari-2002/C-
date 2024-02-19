#include <iostream>
using namespace std;
class bankdep
{
private:
    int principal;
    int year;
    float rate;
    int rv;

public:
    bankdep() {}
    bankdep(int p, int y, float r);
    bankdep(int p, int y, int r);
    void show(void);
};
bankdep::bankdep(int p, int y, float r)
{
    principal = p;
    year = y;
    rate = r; // just suppose that interst rate is 0.04
    rv = principal;
    for (int i = 0; i < y; i++)
    {
        rv = principal * (1 + rate);
    }
}
bankdep::bankdep(int p, int y, int r)
{
    principal = p;
    year = y;
    rate = float(r) / 100; // just suppose that interst rate is 4%
    rv = principal;
    for (int i = 0; i < y; i++)
    {
        rv = principal * (1 + rate); //  the principal value is 1000 , year is 1 , rate is 10 rv is 1100 that is answer.
    }
}
void bankdep ::show(void)
{
    cout << " principal =" << principal << endl
         << " Time =" << year << endl
         << " rate =" << rate << endl
         << " returnvalue =" << rv << endl;
}

int main()
{
    bankdep x1, y1, z1;
    int p;
    int y;
    float r;
    int R;
    cout << " Enter the details for calculate intrest " << endl;
    cout << " enter the value  of p " << endl;
    cin >> p;
    cout << " enter the value  of y " << endl;
    cin >> y;
    cout << " enter the value  of r " << endl;
    cin >> r;
    bankdep(p, y, r);
    x1.show();

    cout << " \nEnter the details for calculate interset " << endl;
    cout << " enter the value  of p " << endl;
    cin >> p;
    cout << " enter the value  of y " << endl;
    cin >> y;
    cout << " enter the value  of R " << endl;
    cin >> R;
    y1 = bankdep(p, y, R);
    y1.show();
    return 0;
}