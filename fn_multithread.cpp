#include<iostream>
#include<thread>
using namespace std;

void threadfn1(int start, int end)
{
    for (int i =start;i<=end;i++)
    {
        cout << "Hello" << endl;
    }
}

void threadfn2(int start, int end)
{
    for (int i =start;i<=end;i++)
    {
        cout << "Bye" << endl;
    }
}

int main()
{
    clock_t start, end;
    start = clock();

    //threadfn1(1,25000);
    //threadfn2(25001,50000);

    thread fntest1 (threadfn1,1,25000);
    thread fntest2 (threadfn2,25001,5000);
    fntest1.join();
    fntest2.join();

    end = clock();

    double totaltime = (end-start) / double(CLOCKS_PER_SEC);
    cout << "Total time = " << totaltime << endl;
    cout << CLOCKS_PER_SEC << endl;

    return 0;
}

//g++ -std=c++11 multithreading.cpp -o multithreading -pthread
//use this to compile