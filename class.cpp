#include <iostream>
using namespace std;

class house
{
    private:
    int length=0, breadth=0;
public:
    void setData(int x, int y)
    {
        length = x;
        breadth = y;
    }

    void area()
    {
        cout << "Area of house = " << length * breadth;
    }
};

int main()
{
    house h1;
    h1.setData(600,500);
    //h1.length = 1000;
    //h1.breadth = 1200;
    h1.area();
    return 0;
}