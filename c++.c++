
#include <iostream>
using namespace std;

int glo = 10;
void mam()
{

    int op = 15;

    cout << op << endl;
    cout << glo << endl;
}

int main()
{
    int loc = 25;
    int glo = 189;

    cout << loc << endl;
    // mam();
    cout << ::glo << endl;

    return 0;
}
