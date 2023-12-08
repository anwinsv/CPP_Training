#include <iostream>
using namespace std;

class alpha
{
private:
    int a;
public:
    alpha (int arg=0)
    {
        a = arg;
    }

    friend class beta;
};

class beta
{
private:
    int b;
public:
    beta (int arg=0)
    {
        b = arg;
    }

    void sum(int x)
    {
        alpha ob1(x);

        int sum = ob1.a + b;

        cout << "Sum = " << sum << endl;
    }
};

int main()
{
    beta ob2(4);

    ob2.sum(5);

    return 0;
}