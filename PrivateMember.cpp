#include <iostream>

using namespace std;

class Private
{

    int empId;
    float salary;

    void privateDisplay();

public:
    string empName;

    Private(int id, string name, float sal)
    {
        empId = id;
        empName = name;
        salary = sal;
    }

    void publicDisplay();
};

void Private ::privateDisplay()
{

    cout << "Employee ID: " << empId << endl;
    cout << "Employee Salary: " << salary << endl;
}

void Private ::publicDisplay()
{

    cout << endl
         << "Employee Details: " << endl;
    cout << "Employee Name: " << empName << endl;
    privateDisplay();
    
}

int main()
{

    Private emp(1001, "Noisyboy", 10000.00);
    emp.publicDisplay();
    
}
