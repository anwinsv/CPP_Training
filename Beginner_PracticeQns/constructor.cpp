#include <iostream>
using namespace std;

class phone
{
    string brand;
    int ram;
    string cpu;
    int battery;

public:
    phone() //non-parametrized (default) constructor
    {
        brand = "Null";
        ram = 0;
        cpu = "Null";
        battery = 0;
    }

    phone(string a, int b, string c, int d)   //parametrized constructor
    {
        brand = a;
        ram = b;
        cpu = c;
        battery = d;
    }
    phone (phone &ph)  //copy constructor
    {
        brand = ph.brand;
        ram = ph.ram;
        cpu = ph.cpu;
        battery = ph.battery;
    }

    void getData();
};

void phone::getData()
{
    cout << endl << "Brand: " << brand;
    cout << endl << "RAM: " << ram;
    cout << endl << "Processor: " << cpu;
    cout << endl << "Battery: " << battery << endl;
}

int main()
{
    phone apple;
    phone samsung("s23", 8, "Snapdragon", 5000);
    phone galaxy(samsung);
    apple.getData();
    samsung.getData();
    galaxy.getData();

    return 0;
}