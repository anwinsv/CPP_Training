#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, str2;

    cout << "Enter first string: ";
    getline(cin,str);

    cout << "Enter second string: ";
    getline(cin,str2);

    if (str.length() == str2.length())
    cout << "The length of both strings are equal" << endl;
    else
    cout << "The length of the strings are not equal" << endl;

    return 0;
}
