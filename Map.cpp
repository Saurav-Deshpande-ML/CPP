#include <iostream>
#include <map>
#include <cstring>

using namespace std;

int main()
{
    int i, empId, choice;
    string name;
    map<string, int> employee;

    while (1)
    {

        cout << endl
             << "1. Insert Employee record" << endl
             << "2. Delete Employee record" << endl
             << "3. Display Employee records" << endl
             << "4. Find Employee record" << endl
             << "5. Exit" << endl;

        cout << endl
             << "Enter your choice: ";
        cin >> choice;

        switch (choice)
        {

        case 1:

            int size;
            cout << endl
                 << "Enter number of Employees: ";
            cin >> size;
            i = 0;
            while (i < size)
            {
                cout << endl
                     << "Enter Employee " << ++i << "'s name: ";
                cin >> name;
                cout << "Enter Employee " << i << "'s ID: ";
                cin >> empId;
                employee[name] = empId;
            }

            cout << endl
                 << "Record inserted successfully" << endl;
            break;

        case 2:

            cout << endl
                 << "Enter employee's name whose record has to be deleted: ";
            cin >> name;
            if (employee.count(name) == 0)
            {
                cout << endl
                     << "Record does not exist." << endl;
                break;
            }
            employee.erase(name);
            cout << endl
                 << "Record deleted successfully." << endl;
            break;

        case 3:

            cout << endl
                 << "Employee records: " << endl;
            i = 0;
            for (auto emp : employee)
            {
                cout << endl
                     << "Employee " << ++i << "'s Name -> " << emp.first << endl
                     << "Employee " << i << "'s ID -> " << emp.second << endl;
            }
            break;

        case 4:

            cout << endl
                 << "Enter employee's name whose record has to be searched: ";
            cin >> name;
            if (employee.find(name) == employee.end())
            {
                cout << endl
                     << "Record not found" << endl;
                break;
            }
            cout << "Record found: " << endl;
            cout << endl
                 << "Name -> " << name << endl
                 << "ID -> " << employee[name] << endl;

            break;

        case 5:

            cout << "..." << endl;
            exit(0);

        default:

            cout << "Invalid choice...Try again!" << endl;
        }
    }
}
