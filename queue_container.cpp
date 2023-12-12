#include <iostream>
#include <queue>
using namespace std;

int main()
{
    queue<int> q1;

    q1.push(10);
    q1.push(20);
    q1.push(30);

    cout << "\nFront element = " << q1.front() << endl;
    cout << "Back element = " << q1.back() << endl;
    q1.pop();
    cout << "Front element after pop = " << q1.front() << endl;
    cout << "Size of Q = " << q1.size() << endl;

    return 0;
}