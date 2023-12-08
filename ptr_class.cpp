#include <iostream>
#include <string>
using namespace std;

class car
{
private:
    int speed;
public:
    void setData(int x=0)
    {
        speed = x;
    }

    int getData()
    {
        return speed;
    }
};

class bmw
{
private:
    string model;
    car *ptr;
public:
    bmw(string mdl = "NULL", int spd = 0)
    {
        ptr = new car;
        model = mdl;
        ptr->setData(spd);
    }

    void printData()
    {
        cout << "Model: BMW " << model << endl;
        cout << "Top Speed: " << ptr->getData();
    }

    ~bmw()
    {
        delete ptr;
    }
};

int main()
{
    bmw c1("M3", 350);
    c1.printData();
    //c1.~bmw();
    return 0;
}