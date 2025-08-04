#include <iostream>
using namespace std;

class Student
{

public:
    string name;

    double *cgpaPtr;

    Student(string name, double cgpa)
    {

        this->name = name;
        // *this->rollNo = rollNo;
        // why i cant use only this above line

        cgpaPtr = new double;
        *cgpaPtr = cgpa;
    }

    Student(Student &obj)
    {
        this->name = obj.name;

        // this->cgpaPtr = obj.cgpaPtr;
        // i want only change in s2 but it reflects in s1 also so we use deep cody
        // not the shallo copy constructor

        // Now Fine
        cgpaPtr = new double;
        *cgpaPtr = *obj.cgpaPtr;
    }
};

int main()
{

    Student s1("Krisha", 7.9);

    Student s2(s1);

    *s2.cgpaPtr = 8.2;

    // cout << *s1.cgpaPtr << endl;
    // cout << *s2.cgpaPtr << endl;

    cout << *s1.cgpaPtr << endl;
    cout << *s2.cgpaPtr << endl;
}