//program for all root of quardict equation //
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int r, i, x1, x2, a, b, c, formula;
    cout << " Enter the value of a, b,c " << endl;
    cin >> a >> b >> c;
    formula = b * b - 4 * a * c;//this is a formula for quardict equation 
    if (formula > 0)
    {
        x1 = (-b + sqrt(formula) / 2 * a);//it is a finding value of x1
        x2 = (-b - sqrt(formula) / 2 * a);//it is a finding value of x2
        cout << " roots are real and different " << endl;
        cout << " X1 = " << x1 << endl
             << " X2 = " << x2 << endl;
    }
    else if (formula == 0)
    {
        x1 = (-b / 2 * a);
        x2 = (-b / 2 * a);
        cout << "root are real and same " << endl;
        cout << " X1 =x2 " << x1 << endl;
    }
    else if (formula < 0)
    {
        r = (-b / 2 * a);
        i = (sqrt(formula) / 2 * a);
        cout << "X1 = " << r << "+" << i << "i" << endl;
        cout << "X2 = " << r << "-" << i << "i" << endl;
    }

    return 0;
}