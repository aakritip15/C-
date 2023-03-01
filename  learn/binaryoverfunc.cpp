// example for binary operator ‘+’ using friend function

#include <iostream>

using namespace std;
class complex
{
    int real;
    int img;

public:
    complex()
    {
    }
    complex(int a, int b)
    {
        real = a;
        img = b;
    }
    void showdata()
    {
        cout << real << "+" << img << "i" << endl;
    }
    complex operator+(int n)
    {   complex c;
        c.real = n+real;
        c.img = n+ img;

        return c;
    }

    
    friend complex operator+(complex a, complex b);
};
complex operator+(complex a, complex b)
{
    return complex((a.real + b.real), (a.img + b.img));
}
int main()
{
    complex c1, c2, c3;
    c1 = complex(5, 10);
    c2 = complex(15, 20);
    cout << "The value of c1 is:" << endl;
    c1.showdata();
    cout << "The value of c2 is:" << endl;
    c2.showdata();
    c3 = c1 + c2;
    cout << "Sum of two complex values, i.e. c3=c1+c2 is : "<<endl;
    c3.showdata();

    complex c4;
    c4 = c3 + 2;
    c4.showdata();
    return 0;
}