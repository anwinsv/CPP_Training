#include <iostream>
using namespace std;

class base //abstract class
{
public:
    /*virtual void show() //virtual function
    {
        cout << "Base class function" << endl;
    }*/
    virtual void show() = 0; //pure virtual function
};

class drv1 : public base
{
public:
    void show()
    {
        cout << "Derived Class 1 function" << endl;
    }
};

class drv2 : public base
{
public:
    void show()
    {
        cout << "Derived Class 2 function" << endl;
    }
};

int main()
{
    base *ptr;
    ptr = new drv1();

    ptr->show();
    
    delete ptr;

    ptr = new drv2();
    ptr->show();
    delete ptr;

    return 0;
}