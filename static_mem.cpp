#include <iostream>
using namespace std;

class cls
{
private:
    int a;
public:
    cls(int x=0)
    {
        a = x;
        //stat++;
    }

    static int stat;  //static member variable
    static int getStat() //static member function
    {
        stat++;
        return stat;
    }
};

int cls::stat = 0;

int main()
{
    cout << "Stat cls fn " << cls::getStat() << endl;
    cls a(5);
    cout << "Stat a fn " << a.getStat() << endl;
    cls b(7);
    cout << "Stat a var " << a.stat << endl;
    cout << "Stat a var " << b.stat << endl;
    cout << "Stat b fn " << b.getStat() << endl;

    return 0;
}