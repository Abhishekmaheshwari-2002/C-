#include <iostream>
using namespace std;
class pnt
{
private:
    int x, y, xy;

public:
    void setpnt(int a, int b)
    {
        x = a;
        y = b;
    }
    void setdis(int dis)
    {
        xy = dis;
    }
    void showpnt(void)
    {
        cout << " The point of x and y is : (" << x << ", " << y << ")" << endl;
    }
    void showdis(void)
    {
        cout << " The point of distance  x and y is : (" << xy << ")" << endl;
    }
    friend pnt distance(pnt a1, pnt a2);
};
pnt distance(pnt a1, pnt a2)
{
    pnt a3;
    a3.setdis((a2.x - a1.x) * (a2.x - a1.x) + (a2.y - a1.y) * (a2.y - a1.y));

    return a3;
}

int main()
{
    pnt p, q, r;
    p.setpnt(2, 3);
    p.showpnt();

    q.setpnt(4, 6);
    q.showpnt();
    
    r = distance(p, q);
    r.showdis();

    return 0;
}