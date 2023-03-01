#include <iostream>
#include <cmath>


using namespace std;
class point
{
 public:
 double x,y;
};

class Vector
{
 public:
 point start;
 point end;
 
};

void offsetVector (Vector &v, double offsetx, double offsety)
{
  v.start.x += offsetx;
  v.start.y += offsety;
  v.end.x += offsetx;
  v.end.y += offsety;
}

//void printpoint(point P)
//{
 // cout<< "(" <<P.x << "," << P.y <<")";
//}

void printVector( Vector V)
{
    cout << "(" <<V.start.x <<"," <<V.start.y <<")" <<"->" << "(" <<V.end.x <<"," <<V.end.y <<")" <<endl;
    //cout << V.start <<"->"<<V.end <<endl;

}

int main()
{
    Vector v;


    v.start.x = 1;
    v.start.y = 2;
    v.end.x = 3;
    v.end.y = 4;

    offsetVector(v,1,2);
    printVector(v);

}