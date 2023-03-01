#include <iostream>
using namespace std;

// 1 Meter equals to around 3.28 feet
//  1 meter = 3 feet + 3.36 inches = 39.36
class DB;
class DM
{
private:
    float meters;
    float centimeters;

public:
    DM()
    {
        meters = 0;
        centimeters= 0;
    }

    DM(int m, int c)
    {
        meters = m;
        centimeters = c;
    }
    void get_Data()
    {
        cout << "Enter the value of distance in meters" << endl;
        cin >> meters;
        cout<< "Enter the value of distance in centimeters " <<endl;
        cin>> centimeters;
    }

    void Display()
    {
        cout << " The Meter is " << meters << endl;
        cout << " The centimeters is " << centimeters <<endl;
    }
    friend DB operator+(DB &, DM &);
};

class DB
{
private:
    int feet;
    float inches;

public:
    DB()
    {
       feet = 0;
       inches = 0;
    }
    void check()
    {
        while (inches >= 12)
        {
            feet += 1;
            inches -= 12;
        }
    }
    void get_Data()
    {
         cout << " Enter the distance in feet " << endl;
        cin >> feet;
        cout << "Enter the distance in inches" << endl;
        cin >> inches;
        check();
    }

    void display()
    {
        cout<< " The feet is " << feet;
        cout<< "The inches is " << inches;
    }
    friend DB operator+(DB &, DM &);
};

DB operator+(DB & distFeet, DM & distMeter)
{  float totalMeters;
    totalMeters = distMeter.meters + (distMeter.centimeters/100);

    DB addition;
    addition.feet = distFeet.feet;
    addition.inches = distFeet.inches + (totalMeters * 39.36) ;

    addition.check();

    return addition;
}

int main()
{
    DB feet1;
    DB feet2;
    feet1.get_Data();
    DM meter;

    meter.get_Data();
    meter.Display();
    feet2 = feet1 + meter;
    feet2.display();

    
}