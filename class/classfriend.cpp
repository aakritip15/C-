#include <iostream>

using namespace std;

class X;

class Y
{
public:
    void print(X x);

};

class X
{
public:

    int a;
    int b;

    X()
    {
        a = 14, b = 90;
    }
friend void print (X x);
};



void Y :: print(X x)
{
    cout<< "a is " <<x.a <<endl;
    cout << "b is " <<x.b <<endl;
}

int main()
{
    X p;
    Y q;
    //q.input(p);
    q.print(p);
    return 0;
}