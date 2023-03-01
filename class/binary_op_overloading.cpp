#include<iostream>

using namespace std;

class Point
{ 
public:
int x,y;

Point()
{
    x = 1.0 , y = 2.0;
}
Point(int a, int b)
{
    x = a, y =b;
}
void operator+(int a)
{
    x += a;
    y += a;
}

Point operator+(Point a)
{

    x += a.x;
    y += a.y;

    
   return Point(x,y);
}


void display()
{
    cout << x <<y <<endl;
}
};

int main()
{
Point p,q;

p+3;

p.display();

Point s;
s= p+q;
s.display();
return 0;
}