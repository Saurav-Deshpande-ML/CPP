#include <iostream>

using namespace std;

class Private
{

    int empId;
    string empName;
    float salary;

    void calculateSalary(int base)
    {
        salary = base + base * 1.5;
    }

public:
    void getData();
    void displayData();
};

void Private ::getData()
{
    cout << "Enter emp ID: ";
    cin >> empId;
    cout << "Enter emp name: ";
    cin >> empName;
    cout << "Enter emp base Salary: ";
    cin >> salary;
    calculateSalary(salary);
}

void Private ::displayData()
{

    cout << endl
         << "Employee Details: " << endl;
    cout << "Employee Name: " << empName << endl;
    cout << "Employee ID: " << empId << endl;
    cout << "Employee Salary: " << salary << endl;
}

int main()
{

    Private emp;
    emp.getData();
    emp.displayData();
}
