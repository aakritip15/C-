#include <iostream>

using namespace std;

class example 
{
    static int sum ;
    int x;

    public:
    example()
    {
        sum = sum +1;
        x = sum;
    }

    static void stfunc()
    {
        cout<< "Result is " <<sum <<endl;
    }

    void number()
    {
        cout << "Number is " << x <<endl;
    }
};

int example::sum= 0;

int main()
{
    example e1;
    
    example::stfunc();

    example e2,e3,e4;

    example::stfunc();
    e1.stfunc(); // also prints 4 equivalent to example::stfunc()

    e1.number();
    e3.number();
    e2.number();
    
    e4.number();


    return 0;
}