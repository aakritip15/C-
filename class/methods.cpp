#include <iostream>

using namespace std;

class point {
    public:
    double x,y;
    void offsetP(double offsetx, double offsety);
    void print();
};

class Vector
{
   public:
   point start;
   point end;
   void offsetV(double offsetx, double offsety)
   {
    start.offsetP( offsetx, offsety);
    end.offsetP( offsetx, offsety);
   }

   void print()
   {
   start.print();
   cout<< "->";
   end.print();
   cout<< endl;
   }
};


 void point::offsetP(double offsetx, double offsety)
{
    x += offsetx;
    y += offsety;
}

void point::print(){
    cout<< "(" << x <<"," << y << ")" ;
}

int main()
{
    Vector v;

    v.start.x = 1;
    v.start.y = 2;
    v.end.x = 3;
    v.end.y = 4;

    v.print();

    v.offsetV(1.0,2.0);
    v.print();
}