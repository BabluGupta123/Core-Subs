#include <iostream>
using namespace std;

class Teacher
{

private:
    double salary;

public:
    // Default Constructor
    Teacher()
    {
        cout << "Hello IM constructor" << endl;
    }

    // parameterized Constructor
    Teacher(string name, string dept, double salary)
    {

        this->name = name;
        this->dept = dept;
        this->salary = salary;
        // can we modify private properties using constructor
    }

    string name;
    string dept;

    void changeDept(string dept)
    {
        this->dept = dept;
    }

    double getSalary()
    {

        return salary;
    }

    void setSalary(double newSalary)
    {

        salary = newSalary;
    }
};

int main()
{
    Teacher t1("Bablu Gupta", "CSED", 12344.3);

    // Copy Constructor
    Teacher t2(t1);
    t2.setSalary(30000);

    cout << t1.getSalary() << endl;
    cout << t2.getSalary() << endl;
}