#include <iostream>
using namespace std;
class base
{
public:
    int b;
    virtual void setdata(int a)
    {
        b = a;
    }
    virtual void showdata()
    {
        cout << " The value of base  class of b  is : " << b << endl;
    }
};

class derivied : public base
{
public:
    int d;
    void setdata(int a1)
    {
        d = a1;
    }
    void showdata()
    {
        //        cout << " The value of base  class of b  is : " << b << endl;
        cout << " The value of derivied  class of d  is : " << d << endl;
    }
};
int main()
{
    base base_obj;
    derivied derivied_obj;
    base *base_obj_pnt = &derivied_obj; //  pointing  to base class pointer obj to derivied class obj...
    base_obj_pnt->b = 11;               // it is a pointer of base class object
    //base_obj_pnt->d = 11;                            //they will show error
    //base_obj_pnt and base_obj both are perform same if you did not make virtal function in base class
    base_obj_pnt->setdata(110); // it is a pointer of base class object
    base_obj_pnt->showdata();
    // base_obj.setdata(10);
    // base_obj.showdata();

    derivied *derivied_obj_pnt = &derivied_obj; //pointig to derivied class pointer to derivied class object
    derivied_obj_pnt->b = 9;
    derivied_obj_pnt->setdata(112);
    derivied_obj_pnt->showdata();

    // derivied_obj.setdata(12); //it is a object of derivied class
    // derivied_obj.showdata();

    return 0;
}