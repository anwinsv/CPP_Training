#include <iostream>
using namespace std;

int main()
{
    int num1,num2;
    float res;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    try
    {
        if (num2 == 0)
        {
            throw num2;
        }
        else
        {
            res = num1/num2;
            cout << "Result = " << res << endl;
        }

    }
    catch(...)
    {
        cout << "Exception: Math error" << endl;
    }
    return 0;
}