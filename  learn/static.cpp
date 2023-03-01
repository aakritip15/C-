
#include<iostream>
using namespace std;

class example {
    static int sum ;
    int num ;
    public :
    example()
    {
        sum+=1;
        num=sum;

    };

    static  void stfun ()
    {
        cout<<"result is = "<<sum <<endl;
    }

    void number ()
    {
        cout <<"number is ="<<num <<endl;
    }
};

int example ::sum=0;

int main ()
{
    example e1;
    example :: stfun ();
    e1.number();
}