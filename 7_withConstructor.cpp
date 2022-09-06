#include <iostream>

using namespace std;

class College
{

    int *ptr;
    int stud_usn;
    char *stud_name[30];
    float stud_cgpa;

public:

    College(int a,int usn, char* name, float cgpa)
    {
        ptr=new int(a);
        stud_usn = usn;
        *stud_name = name;
        stud_cgpa = cgpa;
    }
    
    College(College& ref)
    {
        
        ptr = new int(*ref.ptr);
        
        stud_usn = ref.stud_usn;
        *stud_name = *ref.stud_name;
        stud_cgpa = ref.stud_cgpa;
    }

    void displayDetail()
    {

        cout << endl
             << "Student Details: " << endl;
        cout << ptr << endl;
        cout << "USN: " << stud_usn << endl;
        cout << "Name: " << *stud_name << endl;
        cout << "CGPA: " << stud_cgpa << endl;
    }
};

int main()
{

    College student1(1,101, (char *)"Noisyboy", 9.8);
    student1.displayDetail();

    College student2(2,102, (char *)"Saurav", 10);
    student2.displayDetail();

    College student3(student2);
    student3.displayDetail();
}
