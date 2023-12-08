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

    friend void frnd(int,int);
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

    friend void frnd(int,int);
};

void frnd(int x, int y)
{
    alpha ob1(x);
    beta ob2(y);

    int sum = ob1.a + ob2.b;

    cout << "Sum = " << sum << endl;
}

int main()
{
    frnd(5,5);

    return 0;
}