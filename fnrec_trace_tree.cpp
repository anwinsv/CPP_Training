#include <iostream>
using namespace std;

void fn(int);

int main()
{
    int x=3;
    fn(x);
    return 0;
}
/*
void fn(int n)
{
    if (n>0)
    {
        cout << n << "\t";
        fn(n-1);
    }
}

*/
void fn(int n)
{
    if (n>0)
    {
        fn(n-1);
        cout << n << "\t";
        fn(n-1);
    }
}
