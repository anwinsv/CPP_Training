#include <iostream>
#include <map>
#include <string>
using namespace std;

int main()
{
    map<int,string> m1;
    map<int,string>::iterator i;

    //insert
    m1 = {{101,"Shaji"},{102,"Jincy"},{103,"Anwin"}};

    m1[104] = "Liya";

    for(i=m1.begin();i!=m1.end();i++)
    {
        cout << i->first << " ";
        cout << i->second << endl;
    }
    cout << endl;

    //at()
    cout << "Value at 103: " << m1.at(103) << endl;

    //change value
    m1.at(104) = "Akku";
    cout << "Changed value at 104: " << m1.at(104) << endl;

    //insert - insert value at a particular location in between
    m1.insert(pair<int,string>(106,"Varghese")); //method 1
    m1.insert(make_pair(107,"Annamma")); //method 2
    m1[105] = "Joyanna"; //method 3
    for(i=m1.begin();i!=m1.end();i++)
    {
        cout << i->first << " ";
        cout << i->second << endl;
    }
    cout << endl;

    //erase() - remove entry in map pointed by iterator
    i = m1.begin();
    m1.erase(i);
    for(i=m1.begin();i!=m1.end();i++)
    {
        cout << i->first << " ";
        cout << i->second << endl;
    }
    cout << endl;

    m1[101] = "Shaji";
    for(i=m1.begin();i!=m1.end();i++)
    {
        cout << i->first << " ";
        cout << i->second << endl;
    }
    cout << endl;

    return 0;
}