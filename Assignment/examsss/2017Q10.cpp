#include <iostream>
using namespace std;

class MY_Distance
{
private:
int meter;
float centimeter;

public:
MY_Distance()
{
    meter = 0;
    centimeter = 0;    
}

MY_Distance(int m, float c)
{
    meter = m;
    centimeter = c;
    check();
}

void check()
{
    if(centimeter>= 100 )
    {
        meter += 1;
        centimeter-= 100;
    }
}

void operator+=(MY_Distance &);

void display()
{
    cout<< " The distance is " <<endl;

    cout << "Meter = " <<meter <<endl << "Centimeter = " <<centimeter << endl;
}

};

void MY_Distance::operator+=(MY_Distance & dist)
{
    meter += dist.meter;
    centimeter+= dist.centimeter;

    check();
}

int main()
{
    MY_Distance distance(2,30);
    MY_Distance distance2(3,70);


    distance += distance2;

    distance.display();

}