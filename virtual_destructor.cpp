#include <iostream>
using namespace std;

class base
{
public:
    virtual ~base() //virtual destructor. Destroys base class and derived class
    {
        cout << "Base class destructor" << endl;
    }
};

class drv1 : public base
{
public:
    ~drv1()
    {
        cout << "Drv1 class destructor" << endl;
    }
};

int main()
{
    base *ptr = new drv1;
    delete ptr;

    return 0;
}

