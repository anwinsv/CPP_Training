#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str, str2, str3;

    cout << "Enter a string: ";
    getline(cin,str);

    cout << "Enter the string to remove: ";
    getline(cin,str2);

    cout << "Enter the string to replace with: ";
    getline(cin,str3);
    while (str.find(str2) != string::npos)
    str.replace(str.find(str2), str2.size(), str3);

    cout << "Changed string: " << str << endl;

    return 0;
}