#include <iostream>
#include <string>
using namespace std;

template <class T>
T sum (T x, T y)
{
    return x+y;
}

int main()
{
    cout << sum<int>(3,7) << endl;
    cout << sum<float>(3.4f,2.5f) << endl;
    cout << sum<double>(3.5,7.3) << endl;
    cout << sum<string>("Anwin ","Shaji") << endl;

    return 0;
}