#include <iostream>
#include <array>
using namespace std;

int main()
{
    array<int,10> arr;
    arr = {1,2,3,4,5,6,7,8,9,010101};
    
    cout << "Using at(): " << arr.at(4) << endl;
    cout << "front(): " << arr.front() << endl;
    cout << "back(): " << arr.back() << endl;
    cout << "Size: " << arr.size() << endl;
    cout << "Max size: " << arr.max_size() << endl;
    return 0;
}