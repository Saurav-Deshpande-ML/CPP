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
    int i = 0;
    stud stud_rec;
    int studentSize;

public:
    student(int size)
    {

        studentSize = size;
    }
    void getStudentDetails(stud[]);
    void displayStudentDetails(stud[]);
};

void student ::getStudentDetails(stud stud_rec[])
{

    if (i < studentSize)
    {

        cout << endl
             << "Enter usn of the student " << i + 1 << ": ";
        cin >> stud_rec[i].usn;
        cout << "Enter student " << i + 1 << "'s name: ";
        cin >> stud_rec[i].studentName;
        cout << "Enter student " << i + 1 << "'s college: ";
        cin >> stud_rec[i].college;
        cout << "Enter student " << i + 1 << "'s cgpa: ";
        cin >> stud_rec[i].cgpa;
        i++;
        getStudentDetails(stud_rec);
    }
    else
    {
        i = 0;
        cout << endl
             << "Records inserted successfully" << endl;
    }
}

void student ::displayStudentDetails(stud stud_rec[])
{

    if (i < studentSize)
    {
        cout << endl
             << "Student " << i + 1 << "'s Details :" << endl;
        cout << endl
             << "USN : " << stud_rec[i].usn << endl
             << "Name : " << stud_rec[i].studentName << endl
             << "College : " << stud_rec[i].college << endl
             << "CGPA: " << stud_rec[i++].cgpa << endl;

        displayStudentDetails(stud_rec);
    }
}

int main()
{
    int studentSize;
    stud *student_rec;
    cout << endl
         << "Enter number of students: ";
    cin >> studentSize;
    student_rec = new stud[studentSize];
    student stu(studentSize);
    stu.getStudentDetails(student_rec);
    stu.displayStudentDetails(student_rec);

    delete[] student_rec;
}
