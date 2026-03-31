#include <iostream>
using namespace std;

class Employee
{
protected:
    int empID;
    string name;

public:
    void getEmployee()
    {
        cout << "Enter Employee ID: ";
        cin >> empID;
        cin.ignore();

        cout << "Enter Employee Name: ";
        getline(cin, name);
    }

    void showEmployee()
    {
        cout << "Employee ID: " << empID << endl;
        cout << "Employee Name: " << name << endl;
    }
};

class Department : public Employee
{
protected:
    string deptName;

public:
    void getDepartment()
    {
        getEmployee();
        cout << "Enter Department Name: ";
        getline(cin, deptName);
    }

    void showDepartment()
    {
        showEmployee();
        cout << "Department: " << deptName << endl;
    }
};

class PF : public Department
{
private:
    float basicSalary, pfAmount;

public:
    void getPF()
    {
        getDepartment();
        cout << "Enter Basic Salary: ";
        cin >> basicSalary;

        pfAmount = basicSalary * 0.12;
    }

    void showPF()
    {
        showDepartment();
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "PF Amount (12%): " << pfAmount << endl;
    }
};

int main()
{
    PF e;
    e.getPF();

    cout << "\nEmployee Details\n";
    e.showPF();

    return 0;
}