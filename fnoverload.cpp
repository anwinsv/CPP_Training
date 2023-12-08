#include <iostream>
using namespace std;

void add(int, int);
void add(float, float, float);

int main()
{
    float a=0,b=0,c=0;
    cout << "Enter three float numbers: ";
    cin >> a >> b >> c;
    add(4,5);
    add(a,b,c);
    return 0;
}

void add(int a, int b)
{
    cout << endl << "INT" << a+b;
}

void add(float a, float b, float c)
{
    cout << endl << "FLOAT" << a+b+c;
}