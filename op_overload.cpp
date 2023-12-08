#include <iostream>
using namespace std;

class A
{
private:
    int x;
public:
    A (int a = 0)
    {x = a;}
    /*A operator+ (A w)
    {
        A temp;
        temp.x = x + w.x;
        return temp;
    }*/
    void operator ++ ()
    {
        ++ x;
    } 
    void operator ++ (int)
    {
        x ++;
    } 
    void printData()
    {
        cout << "Result = " << x << endl;
    }
};

int main()
{
    A obj1(5);
    A obj2(10);
    A sum;

    //sum = obj1 + obj2;
    ++obj1;
    ++obj2;
    ++sum;

    obj1++;
    obj2++;
    sum++;

    obj1.printData();
    obj2.printData();
    sum.printData();

    return 0;
}
