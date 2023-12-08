#include <iostream>
using namespace std;

int main()
{
    int a=0,i,n;

    cout << "Enter a number: ";
    cin >> a;

    if (a<=1)
    {
        cout << "1 is not a prime number. Smallest prime number is 2." << endl;
    }

    for (i=2; i<a;i++)
    {
        if (a%i == 0)
        {
            cout << "Not a prime number" << endl;
            break;
        }
        else
        {
            cout << "Prime Number" << endl;
            break;
        }
    }
    return 0;
}