#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int>::iterator i;
    list<int> l1; //initialize list

    list<int> l2 = {1,2,3,4,5}; //declaration of list
    
    i = l2.end(); //initialize iterator
    l2.insert(i,6);

    for(i=l2.begin();i!=l2.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    l2.push_back(7);
    for(i=l2.begin();i!=l2.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    l2.push_front(0);
    for(i=l2.begin();i!=l2.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    l2.pop_back();
    for(i=l2.begin();i!=l2.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    l2.pop_front();
    for(i=l2.begin();i!=l2.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    l2.reverse();
    for(i=l2.begin();i!=l2.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    cout << "L2 size: " << l2.size() << endl;

    l2.sort();
    for(i=l2.begin();i!=l2.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    l1 = {8,9};
    l2.merge(l1);
    for(i=l2.begin();i!=l2.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}