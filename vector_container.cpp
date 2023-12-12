#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>::iterator i; //iterator initialize
    //declaration
    vector<int> v1;
    cout << "Size of vector: " << v1.size() << endl;

    //initialize vector
    vector<int> v2 = {10,20,30,40};
    cout << "Capacity = " << v2.capacity() << endl;
    cout << "At: " << v2.at(3) << endl;
    
    v2.push_back(50); //pushing element to the end of the vector
    v2.push_back(60);

    //iterator = pointer to the container

    for (i = v2.begin(); i != v2.end(); i++)
    {
        cout << *i << " ";
    }

    cout << endl;

    //pop out last element
    v2.pop_back();
    v2.pop_back();

    for (vector<int>::iterator i = v2.begin(); i != v2.end(); i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    //insert - insert element before position pointed by iterator
    i = v2.begin();
    v2.insert(i,0);
    cout << "Begin after insert 0 = " << v2.at(0) << endl;

    //erase - delete element pointed by iterator
    v2.erase(i);
    cout << "Begin after erase = " << v2.at(0) << endl;

    //swap - swaps elements of 2 vectors;
    v1 = {9,8,7};
    v2.swap(v1);
    cout << "V2 begin = " << v2.at(0) << endl;
    cout << "V1 begin = " << v1.at(0) << endl;

    return 0;
}