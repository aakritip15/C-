#include <iostream>

using namespace std;

class X;

class Y
{
public:
    void print(X x);
   // void input(X &x);
};

class X
{
    int a;
    int b;

public:
    X()
    {
        a = 14, b = 90;
    }
//friend void Y::print(X x);  only one method of class is friend,,,, Member friend functions// friend class function
 friend class Y; // whole class is friend ,,,,friend class
};

/* void Y:: input (X &x)
{
    cin>> x.a >>x.b;
}
*/
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