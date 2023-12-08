#include <iostream>
using namespace std;

class person
{
    int *age;
public:
    person()
    {
        cout << "NP Constructor" << endl;
    }
    person(int a)
    {
        age = new int();
        cout << "P Constructor" << endl;
    }
    ~person()
    {
        cout << "Destructor" << endl;
    }
};

int main()
{
    person obj1(22);
    person obj2;
    return 0;
}