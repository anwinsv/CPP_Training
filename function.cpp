#include <iostream>
using namespace std;

void armstrong(int);

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    armstrong(num);

    return 0;
}

void armstrong(int a)
{
    int temp,rem,res=0;
    temp = a;

    while (temp != 0)
    {
        rem = temp % 10;
        res = res + (rem*rem*rem);
        temp = temp/10;
    }

    if (res == a)
    {
        cout << res << " is an Armstrong Number" <<endl;
    }
    else
    {
        cout << a << " is not an Armstrong Number" << endl;
    }

}