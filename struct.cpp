#include <iostream>
#include <string>
using namespace std;

struct stud
{
    string name;
    int roll;
    int marks;
};

int main()
{
    stud p1;
    cout << "Enter student details: " << endl;
    cout << "Full Name: ";
    getline(cin,p1.name);
    cout << "Roll Number: ";
    cin >> p1.roll;
    cout << "Marks: ";
    cin >> p1.marks;

    cout << endl << "Student Details: " << endl;
    cout << "Name: " << p1.name << endl << "Roll Number: " << p1.roll << endl << "Marks: " << p1.marks << endl;
}