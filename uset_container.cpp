#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s1 = {1,4,2,6,2,1,7,8,3,5};
    unordered_set<int>::iterator i;

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

    i = s1.begin();
    s1.erase(i);
    s1.erase(7);
    s1.erase(s1.begin(),s1.find(6));

    cout << endl;
    for (i=s1.begin();i!=s1.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;
    return 0;
}