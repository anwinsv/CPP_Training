#include <iostream>
using namespace std;

int fact(int);
int sum(int);

int main()
{
    int num=0;

    cout << "Enter a number: ";
    cin >> num;
    cout << "Facorial of " << num << " = " << fact(num)<< endl;
    cout << "Sum = " << sum(num) << endl;
    return 0;
}

int fact (int num)
{
    int res=1;
    if (num > 0)
    res = num * fact(num-1);
    return res;
}

int sum(int num)
{
    int s = 0;
    if (num > 0)
    s = num + sum(num-1);
    return s;
}