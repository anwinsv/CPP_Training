#include <iostream>
using namespace std;

class person
{
private:
    int weight;
public:
    person (int arg=0)
    {
        weight = arg;
    }

    friend bool operator > (person x, person y);
    friend bool operator < (person x, person y);
};

bool operator > (person x, person y)
{
    return x.weight > y.weight;
}

bool operator < (person x, person y)
{
    return x.weight < y.weight;
}

int main()
{
    int w1,w2;
    cout << "Enter weight of 1st person: " << endl;
    cin >> w1;
    cout << "Enter weight of 2nd person: " << endl;
    cin >> w2;

    person p1(w1);
    person p2(w2);

    if (p1 > p2)
    {
        cout << "1st person is heavier than 2nd person" << endl;
    }
    else if (p1 < p2)
    {
        cout << "2nd person is heavier than 1st person" << endl;
    }

    return 0;
}