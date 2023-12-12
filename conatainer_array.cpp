#include <iostream>
#include <array>
using namespace std;

int main()
{
    int i;
    std::array<int,10> arr;
    arr = {1,2,3,4,5,6};
    cout << "Using at(): " << arr.at(4) << endl;
    cout << "front(): " << arr.front() << endl;
    cout << "back(): " << arr.back() << endl;
    for (i=0;i<10;i++)
    {
        cout << arr[i];
    }
    cout << "Size: " << arr.size() << endl; //no use--0 padded
    cout << "Max size: " << arr.max_size() << endl;
    return 0;
}
