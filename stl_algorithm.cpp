#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
    vector<int> v1 = {99,56,69,34,72,27,15,49};
    vector<int>::iterator i;
    int srch;

    for(i=v1.begin();i!=v1.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    //SORT
    sort(v1.begin(),v1.end()); //ascending order
    cout << "Sorted Vector: ";
    for(i=v1.begin();i!=v1.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    //REVERSE
    reverse(v1.begin(),v1.end());
    cout << "Reverse: ";
    for(i=v1.begin();i!=v1.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    //MAX MIN
    cout << "Max element: " << *max_element(v1.begin(),v1.end()) << endl;
    cout << "Min element: " << *min_element(v1.begin(),v1.end()) << endl;
    
    //BINARY SEARCH
    cout << "Enter value to search: ";
    cin >> srch;
    if(binary_search(v1.begin(),v1.end(),srch))
        cout << "Value found" << endl;
    else
        cout << "Value not found" << endl;
    
    vector<int> v2 = {7,3,5,5,5,6,6,2,1,1,1,5};
    vector<int>::iterator i1,i2;
    //UPPER LOWER BOUND
    i1 = upper_bound(v2.begin(),v2.end(),5);
    i2 = lower_bound(v2.begin(),v2.end(),1);
    cout << "Upper bound of 5 = " << *i1 << endl;
    cout << "Lower bound of 1 = " << *i2 << endl;

    //COPY
    vector<int> v3 = {0};
    copy(v1.begin(),v1.end(),v3);
    cout << "V3: ";
    for(i=v3.begin();i!=v3.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    //SWAP
    swap(v2,v3);
    cout << "V3 swap: ";
    for(i=v3.begin();i!=v3.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    //UNIQUE
    i2 = unique(v3.begin(),v3.end());
    cout << "V3 unique: ";
    for(i=v3.begin();i!=v3.end();i++)
    {
        cout << *i << " ";
    }
    cout << endl;

    return 0;
}