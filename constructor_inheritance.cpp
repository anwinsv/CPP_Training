#include <iostream>
using namespace std;

class base
{
    int x;

public:
    base()
    {
        cout << "Default Base Constructor" << endl;
    }

    base(int b)
    {
        cout << "Parametrized base constructor for " << b << endl;
    }

    void msg()
    {
        cout << "Function of base class" << endl;
    }
};

class deriv : public base
{
    int y;

public:
    deriv()
    {
        cout << "Default deriv constructor" << endl;
    }

    deriv(int d) : base(d)
    {
        cout << "Parametrized deriv constructor for " << d << endl;
    }

    void msg() //only this function will be called unlike constructors
    {
        cout << "Function of derived class" << endl;
        base::msg(); //to call function of base class
    }
};

int main()
{
    base a;
    base b(7);
    deriv c;
    deriv d(8);

    c.msg();
    b.msg();

    return 0;
}