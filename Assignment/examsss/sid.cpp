#include <iostream>
#include <cstring>
using namespace std;

class Employee
{
protected:
    string name;
    static int eno;

public:
    Employee()
    {
        cout << "Enter name of Employee:" << endl;
        cin>> name;
        eno++;
    }
    Employee(string n)
    {
        name = n;
    }
    virtual void salary() = 0;
    ~Employee()
    {
        cout << "Employee Destructor called." << endl;
    }
}; int Employee::eno = 0;

class Regular : public Employee
{
    float basic;

public:
    Regular()
    {
        cout << "Enter the monthly salary for regular:" << endl;
        cin >> basic;
    }
    Regular(string n, float salary) : Employee(n)
    {
        basic = salary;
    }
    void salary()
    {
            cout<< "Employee no" << eno;
        float DA, HRA, total;
        DA = 0.1 * basic;
        HRA = 0.3 * basic;
        total = basic + DA + HRA;
        cout << "Total Salary = " << total << endl;
    }

    ~Regular()
    {
        cout << "Regular Destructor Called." << endl;
    }
};

class Adhoc : public Employee
{
    float wage;
    int number;

public:
    Adhoc()
    {
        cout << "Enter wage " << endl;
        cin >> wage ;
        cout << "Enter  number of days:" <<endl;
        cin>> number;
    }
    Adhoc(string n, float w, int num) : Employee(n)
    {
        wage = w;
        number = num;
    }
    void days(int n)
    {
        wage = number * wage;
    }
    void salary()
    {
        days(number);
        cout<< "Employee no" << eno;

        cout << "Total Wage: " << wage << endl;
    }

    ~Adhoc()
    {
        cout << "Adhoc destructor called." << endl;
    }
};

int main()
{

    // Employee *emp, *emp2;
    Regular reg;
    // emp = &reg;
    reg.salary();


    // emp2 = new Adhoc();
    // emp2->salary();
    Regular re;
    re.salary();


    return 0;
}