#include <iostream>
using namespace std;

class rectangle
{
public:
    int length;
    int breadth;

    void area()
    {
        cout << "Area of rectangle = " << length*breadth << endl;
    }
};

class cuboid : public rectangle
{
public:
    int height;

    void volume()
    {
        cout << "Volume of Cuboid = " << length*breadth*height << endl;
    }
};

int main()
{
    cuboid c;
    rectangle r;

    c.length = 40;
    c.breadth = 20;
    c.height = 30;

    c.area();
    c.volume();
    
    r.area();
}