#include<iostream>
using namespace std;

void PrintArray(int *ptr, int size);

int main()
{
    int arr[10] = {32,34,43,69,12,34,72,55,80,10};

    PrintArray(arr,10);

    return 0;
}

void PrintArray(int *ptr, int size)
{
    int i;

    for(i=0;i<size;i++)
    {
        cout << *ptr++ << "\t";
    }
}