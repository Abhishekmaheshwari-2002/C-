//program for calculate grade of student
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int tot, m, e, h, s, p;

    cout << " enter student marks  " << endl;
    cin >> m >> e >> h >> s;
    cout << "  Student name = Rohan  " << endl;

        cout << " Maths    :  " << m << endl
         << " English  :  " << e << endl
         << " Hindi    :  " << h << endl
         << " science  :  " << s << endl;
    tot = m + e + h + s;
    cout << " Total number : " << tot << endl;
    p = tot / 4;
    cout << " percent = " << p << "%" << endl;
    if (p > 90)
    {
        cout << " grade  = A " << endl;
    }
    else if (p > 75 && p < 89)
    {
        cout << " grade  = B " << endl;
    }
    else if (p > 60 && p < 74)
    {
        cout << " grade  = C" << endl;
    }

    return 0;
}