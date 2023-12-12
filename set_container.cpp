#include<iostream>
#include<string>
#include<set>
using namespace std;

int main()
{
    set<int> s1 = {1,4,2,6,2,1,7,8,3,5};
    set<int>::iterator i;

    for (i=s1.begin();i!=s1.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    s1.insert(9);
    s1.insert(11);
    s1.insert(10);

    cout << endl;
    for (i=s1.begin();i!=s1.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}