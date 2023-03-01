#include <iostream>
using namespace std;
#include <cmath>
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.
    2. ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operations of your choice and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

class Simple
{
    float a;
    float b;
    float addition(int x, int y)
    {
        return (x + y);
    }
    float substraction(int x, int y)
    {
        return (x - y);
    }
    float multiple(int x, int y)
    {
        return (x * y);
    }
    float division(int x, int y)
    {
        return (x / y);
    }

public:
    void set_data()
    {
        cout << "enter first number" << endl;
        cin >> a;
        cout << "enter second number" << endl;
        cin >> b;
    }
    void displaysimple()
    {
        cout << "The sum is " << addition(a, b) << endl;
        cout << " The substration is" << substraction(a, b) << endl;
        cout << " The multiple is" << multiple(a, b) << endl;
        cout << " The division is" << division(a, b) << endl;
    }
};

class scientific
{
    float x;
    float y;

    public :
    void setdata()
    {
        cout << "Enter num" << endl;
        cin >> x;
        cout << "Enter num" << endl;
        cin >> y;
    }

    void loga();
    void sine()
    {
        cout<< "sine(" <<x <<") is " <<sin(x) << "And sine(" <<y <<") is " << sin(y) <<endl;
    }
};
void scientific ::loga()
{
    int num;
    cout << "Enter the type of lagarithm \n 1. Natural base(loge)  \n 2. Commonlog (log10) \n 3. Your own base(log a)\n";
     cin >> num;
    int base;

    switch (num)
    {
    case 1:
        cout << "The natural logarithm of " << x << " is " << log(x) << endl;
        cout << "The natural logarithm of " << y << " is " << log(y) << endl;

        break;
    case 2:
        cout << "The common logarithm of " << x << " is " << log10(x) << endl;
        cout << "The common logarithm of " << y << " is " << log10(y) << endl;

        break;

    case 3:
        cout << "Enter your own base";
        cin >> base;
        cout << "Base a logarithm of " << x << " is " << log(x) / log(base) << endl;
        cout << "Base a logarithm of " << y << " is " << log(y) / log(base) << endl;
    default:
        cout << "Enter valid number " << endl;
        loga();
    }
}

class Derived: public Simple , public scientific
{

};

int main()
{
    Derived d;
    d.set_data();
    d.displaysimple();
    d.setdata();
    d.loga();
    d.sine();


}

