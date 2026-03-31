#include <iostream>
using namespace std;

class Student
{
protected:
    int rollNo;
    string name;

public:
    void getStudent()
    {
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cin.ignore();

        cout << "Enter Name: ";
        getline(cin, name);
    }

    void displayStudent()
    {
        cout << "Roll Number: " << rollNo << endl;
        cout << "Name: " << name << endl;
    }
};

class Marks : public Student
{
private:
    float marks;

public:
    void getMarks()
    {
        getStudent();
        cout << "Enter Marks: ";
        cin >> marks;
    }

    void displayMarks()
    {
        displayStudent();
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Marks s;
    s.getMarks();

    cout << "\nStudent Information\n";
    s.displayMarks();

    return 0;
}