#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
protected:
    string name;
    int Employee_no;
    int Salary;

public:
    Employee(string n = 0, int eno = 0)
    {
        name = n;
        Employee_no = eno;
    }

    virtual void salary() = 0;
};

class Regular : public Employee
{
private:
    int basic;

public:
    Regular(string n = 0, int eno = 0, int b = 0) : Employee(n, eno)
    {
        basic = b;
    }
    ~Regular()
    {
        cout << " The destructor was called " << endl;
    }
    void salary()
    {
        int DA;
        int HRA;
        DA = 0.1 * basic;
        HRA = 0.3 * basic;
        Salary = basic + DA + HRA;

        cout << " The total salary for regular employee is Rs." << Salary << endl;
    }
};

class Adhoc : public Employee
{
private:
    int wage;
    int number;

public:
    Adhoc(string n = 0, int eno = 0, int w = 0, int nu = 0) : Employee(n, eno)
    {
        wage = w;
        number = nu;
    }

    ~Adhoc()
    {
        cout << "The destructor is called " << endl;
    }
    void salary()
    {
        Salary = wage * number;
        cout << " The salary for Adhoc " << endl
             << "Employee Name :" << name << endl;
        cout << "Wage of Rs." << wage << " for " << number << " days" << endl
             << "Salary is  Rs." << Salary << endl;
    }

    void days(int n)
    {   number = n;
        Salary = n * wage;
        cout << "The Salary was updated" << endl;
    }
};

int main()
{
    Employee *employee[2];

    Regular regular("Ram", 2, 10000);
    Adhoc adhoc("Shyam", 5, 1000, 3);

    employee[0] = &regular;
    employee[1] = &adhoc;

    employee[0]->salary();
    employee[1]->salary();

    adhoc.days(5);
    employee[1]->salary();
}