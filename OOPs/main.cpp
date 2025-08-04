// #include <stdio.h>
// #include <bits/stdc++.h>
#include <iostream>

using namespace std;

// What these header lines do
// can we skip these or what is the effect of including or skipping each above header lines
class Teacher
{

private:
    double salary;

public:
    string name;
    string dept;
    // float salary;

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

        this->salary = newSalary;
    }

    // if i can access private properties using getter and setter then what
    // is benefit of declaring them private
};

int main()
{
    Teacher t1;

    // what is difference between \n and endl;

    // t1->name = "Bablu Gupta";
    // why this syntax is not correct

    // what is difference between float and double

    t1.name = "Bablu Gupta";
    t1.dept = "CSED";
    t1.setSalary(75000.50);

    cout << "name = " << t1.name << endl;

    cout << "salary = " << t1.getSalary();
}