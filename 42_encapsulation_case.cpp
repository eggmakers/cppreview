#include "iostream"
#include "string"
#include <random>
using namespace std;

class Student
{
public:
    string name;
    string student_number;
    void show_student_detail()
    {
        cout << "student name is " << name << endl;
        cout << "student number is " << student_number << endl;
    }
};

int main()
{
    Student s1;
    s1.name = "hale";
    s1.student_number = "2021Z08541312";
    s1.show_student_detail();

    return 0;
}