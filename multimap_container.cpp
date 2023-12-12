#include<iostream>
#include<string>
#include<map>
using namespace std;

int main()
{
    //declaration-initialization
    multimap<int,string> m1;
    m1 = {{101,"sdasd"},{102,"sdfs"},{103,"dgdsd"},{103,"sdfsds"},{104,"sdfsdf"}};
    multimap<int,string>::iterator i;

    for(i=m1.begin();i!=m1.end();i++)
    {
        cout << i->first <<" ";
        cout << i->second << endl;
    }
    cout << endl;

    //m1[102] = "vxcv"; //altering using [] not allowed

    //insert
    m1.insert(pair<int,string>(105,"vxcv"));
    m1.insert(make_pair(103,"fdgdg"));
    for(i=m1.begin();i!=m1.end();i++)
    {
        cout << i->first <<" ";
        cout << i->second << endl;
    }
    cout << endl;

    //count - number of elements matching the same key
    cout << "Count for key 103: " << m1.count(103) << endl;

    cout << "Size: " << m1.size() << endl;

    //all other functions similar to map
    return 0;
}