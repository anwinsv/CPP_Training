#include <iostream>
#include <string>
using namespace std;

class person
{
    string name;
    int age;
public:
    person(string name, int age)
    {
        this->name=name;
        this->age=age;
    }
    void printData()
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    person me("anwin",22);
    me.printData();
    return 0;
}