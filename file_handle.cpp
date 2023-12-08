#include <iostream>
#include <fstream>
using namespace std;

class student
{
private:
    char name[30];
    int age;
public:
    void getData()
    {
        cout << "Enter name: ";
        cin.getline(name,30);
        cout << "Enter age: ";
        cin >> age;
    }
    void showData()
    {
        cout << "Name: " << name << endl << "Age: " << age << endl;
    }
};

int main()
{
    student s1;

    ofstream file;  //create output stream
    file.open("sample.txt",ios::out); //open file
    if(!file)
    {
        cout << "Error creating file" << endl;
        return 0;
    }
    cout << "\nFile created/opened successfully" << endl;

    //write data to file
    s1.getData(); //read data from user
    file.write((char*)&s1, sizeof(s1)); //(char*)&s1 gives start address of object. sizeof(s1) gives the size of the object.

    file.close(); //close file
    cout << "File saved and closed successfully" << endl;

    ifstream file1;
    file1.open("sample.txt",ios::in);
    if(!file1)
    {
        cout << "Error creating file" << endl;
        return 0;
    }
    cout << "\nFile created/opened successfully" << endl;

    file1.read((char*)&s1, sizeof(s1));

    s1.showData();

    file1.close();

    return 0;
}