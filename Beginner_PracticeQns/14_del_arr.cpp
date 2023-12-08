#include <iostream>
using namespace std;

int main()
{
    int arr[10], size, pos,i;

    cout << "Enter 10 values: ";
    for (i=0;i<10;i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the position to delete: ";
    cin >> pos;

    for(i=pos;i<10;i++)
    arr[i] = arr[i +1];

    for (i=0;i<9;i++)
    cout << arr[i] << "\t";

    return 0;
}