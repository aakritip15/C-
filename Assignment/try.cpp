#include <iostream>

using namespace std;

class Time
{
public:
    void Set(int h, int m, int s);
    void Increment();
    void Write() const;
    Time(int initH, int initM, int initS); // constructor
    Time();                                // default constructor
protected:
    int hrs;
    int mins;
    int secs;
};
enum ZoneType{ CST, EST, MST, PST, EDT, CDT, MDT, PDT};
class ExtTime : public Time

// Time is the base class and use public inheritance

{
public:
    ExtTime ::ExtTime(){
        zone = EST} ExtTime ::ExtTime(int initH, int initM, int initS, ZoneType initZone)

        : Time(initH, initM, initS)
    // constructor initializer

    {

        zone = initZone;
    }
    void Set(int h, int m, int s, ZoneType timeZone);
    void Write() const; // overridden
    ExtTime(int initH, int initM, int initS, ZoneType initZone);
    ExtTime(); // default constructor
private:
    ZoneType zone; // added data member
};

void ExtTime ::Set(int h, int m, int s, ZoneType timeZone)
{
    Time ::Set(hours, minutes, seconds); // same name function call
    zone = timeZone;
}

void ExtTime ::Write() const // function overriding
{
    string zoneString[8] ={"EST", "CST", "MST ", "PST", "EDT", "CDT", "MDT", "PDT"};

    Time ::Write();
    cout <<„ „<< zoneString[zone] << endl;
}

int main()
{
    ExtTime thisTime(8, 35, 0, PST);
    ExtTime thatTime; // default constructor called
    thatTime.Write(); // outputs 00:00:00 EST
    thatTime.Set(16, 49, 23, CDT);
    thatTime.Write(); // outputs 16:49:23 CDT
    thisTime.Increment();
    thisTime.Increment();
    thisTime.Write(); // outputs 08:35:02 PST
}