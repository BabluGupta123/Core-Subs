#include <iostream>

using namespace std;

class Person
{

public:
    // private: ->child class cant inherit private properties
    string name;
    int age;
};

class Student : public Person
{
public:
    int rollNo;

    Student(string name, int age, int rollNo)
    {
        this->name = name;
        this->age = age;
        this->rollNo = rollNo;
    }

    void getInfo()
    {

        cout << "name : " << name << endl;
        cout << "age : " << age << endl;
        cout << "rollNo : " << rollNo << endl;
    }
};
class Exam : public Student
{
public:
    int marks;
    string result;

    Exam(string name, int age, int rollNo, int marks, string result)
        : Student(name, age, rollNo)
    {
        this->marks = marks;
        this->result = result;
    }

    // why this gives error
    // Exam(int marks, string result)
    // {
    //     this->marks = marks;
    //     this->result = result;
    // }

    void showRes()
    {
        cout << result << endl;
    }

    void setMarks(int newmarks)
    {
        marks = newmarks;
    }
};

main()
{

    Student s1("sharadha", 20, 21);
    s1.getInfo();

    // s1.name = "shradha";
    // s1.age = 20;
    // s1.rollNo = 21;

    Exam e("Sharadha", 20, 21, 56, "Pass");

    e.setMarks(78);
}