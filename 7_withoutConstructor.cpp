#include <iostream>

using namespace std;

class College
{

    int stud_usn;
    string stud_name; 
    float stud_cgpa;

public:


    void setData()
    {

        cout << endl
             << "Enter Student Usn: ";
        cin >> stud_usn;
        cout << endl
             << "Enter Student Name: ";
        cin >> stud_name;
        cout << endl
             << "Enter Student CGPA: ";
        cin >> stud_cgpa;
    }

    void displayDetail()
    {

        cout << endl
             << "Student Details: " << endl;
        cout << "USN: " << stud_usn << endl;
        cout << "Name: " << stud_name << endl;
        cout << "CGPA: " << stud_cgpa << endl;
    }
};

int main()
{

    College student1, student2;
    student1.setData();
    student2.setData();
    student1.displayDetail();
    student2.displayDetail();
}
