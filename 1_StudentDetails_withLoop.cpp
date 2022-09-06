#include <iostream>
#include <string>
#include <vector>

using namespace std;

typedef struct studentDetails
{

    int usn;
    string studentName;
    string college;
    float cgpa;

} stud;

class student
{

    int studentSize;
    stud *student_rec;

public:
    void getStudentDetails(void);
    void displayStudentDetails(void);
};

void student ::getStudentDetails(void)
{

    cout << endl
         << "Enter number of students: ";
    cin >> studentSize;
    student_rec = new stud[studentSize];

    for (int i = 0; i < studentSize; i++)
    {
        cout << endl
             << "Enter usn of the student " << i + 1 << ": ";
        cin >> student_rec[i].usn;
        cout << "Enter student " << i + 1 << "'s name: ";
        cin >> student_rec[i].studentName;
        cout << "Enter student " << i + 1 << "'s college: ";
        cin >> student_rec[i].college;
        cout << "Enter student " << i + 1 << "'s cgpa: ";
        cin >> student_rec[i].cgpa;
    }
    cout << endl
         << "Records inserted successfully" << endl;
}

void student ::displayStudentDetails(void)
{

    for (int i = 0; i < studentSize; i++)
    {
        cout << endl
             << "Student " << i + 1 << "'s Details :" << endl;
        cout << endl
             << "USN : " << student_rec[i].usn << endl
             << "Name : " << student_rec[i].studentName << endl
             << "College : " << student_rec[i].college << endl
             << "CGPA: " << student_rec[i].cgpa << endl;
    }
}

int main()
{

    student stu;
    stu.getStudentDetails();
    stu.displayStudentDetails();
}
