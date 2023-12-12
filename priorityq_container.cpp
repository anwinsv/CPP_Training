#include <iostream>
#include <queue>
using namespace std;

int main()
{
    priority_queue<int> q1;  //MAX_HEAP
    q1.push(10);
    q1.push(50);
    q1.push(20);
    q1.push(40);
    q1.push(30);

    cout << "Front = " << q1.top() << endl;

    q1.pop();
    cout << "Front after pop = " << q1.top() << endl;

    priority_queue<int,vector<int>,greater<int>> q2; //MIN_HEAP
    q2.push(10);
    q2.push(50);
    q2.push(20);
    q2.push(40);
    q2.push(30);

    cout << "Front = " << q2.top() << endl;

    q2.pop();
    cout << "Front after pop = " << q2.top() << endl;

    return 0;
}
