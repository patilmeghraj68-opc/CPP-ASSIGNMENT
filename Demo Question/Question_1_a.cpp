#include<iostream>
using namespace std;

// Base Class
class Employee
{
public:
    virtual void salary()
    {
        cout << "Salary of Employee" << endl;
    }
};

// Derived Class: Manager
class Manager : public Employee
{
    public:
    void salary() override   // override keyword used
    {
        cout << "Salary of Manager" << endl;
    }
};

// Derived Class: Developer
class Developer : public Employee
{
public:
    void salary() override   // override keyword used
    {
        cout << "Salary of Developer" << endl;
    }
};

int main()
{
    Employee* e;   // Base class pointer

    Manager m;
    Developer d;

    e = &m;
    e->salary();   // Calls Manager's salary()

    e = &d;
    e->salary();   // Calls Developer's salary()

    return 0;
}