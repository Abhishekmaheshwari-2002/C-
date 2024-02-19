// it is just like a hircehcal inheritance //
#include <iostream>
#include <cstring>
using namespace std;
class vehicle
{
protected:
    string comapny_name;
    int km;

public:
    vehicle(string cn, int k) : comapny_name(cn), km(k) {}
    // virtual void show();
    virtual void show() = 0; // it is pure virtual function
    // virtual void show(){
    //     cout<<" hello pagel ";
    // };// if a virtual function definied in base a class ,there is no necessity of redefing it in the  derivied class
};
class activa : public vehicle
{
protected:
    int price_activa;

public:
    activa(string cn, int km1, int pc) : vehicle(cn, km1)
    {
        price_activa = pc;
    }
    void show()
    {
        cout << " The company name  of activa   is :" << comapny_name << endl;
        cout << " and Distance of activa is " << km << "km" << endl
             << "and the  price of activa is " << price_activa << "rupee" << endl;
    }
};
class bike : public vehicle
{
protected:
    int price_bike;

public:
    bike(string cn, int km1, int pb) : vehicle(cn, km1)
    {
        price_bike = pb;
    }
    void show()
    {
        cout << " The company name  of activa   is :" << comapny_name << endl;
        cout << " and Distance of activa is " << km << " KM" << endl
             << "and the  price of activa is " << price_bike << " Rupee" << endl;
    }
};
int main()
{
    activa act("honda", 1000, 25000);
    // act.show();
    bike bik("KTM", 4000, 150000);
    // bik.show();
    vehicle *poi[2];
    poi[0] = &act;
    poi[1] = &bik;
    poi[0]->show();
    poi[1]->show();
    return 0;
}