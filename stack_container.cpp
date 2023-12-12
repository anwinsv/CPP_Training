#include <iostream>
#include <stack>
using namespace std;

int main()
{
    //declare stack
    stack<int> s1;
    s1.push(10);
    s1.push(20);
    s1.push(30);

    cout << "Top element = " << s1.top() << endl;

    s1.pop();
    cout << "Top element after pop = " << s1.top() << endl;

    cout << "Size of stack = " << s1.size() << endl;

    return 0;
}