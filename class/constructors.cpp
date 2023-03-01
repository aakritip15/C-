#include <iostream>
 
using namespace std;

class point
{
    public:
    int x,y;


    point()
    {
        x = 5 , y = 6;
        cout<< "Point instance is created " <<endl;  // Default Constructors
    }
    

    point (int ax, int ay)
    {
        x = ax , y = ay ; // 2-Parameter Constructors
    }

    // when no copy constructor is found compiler gives copy constructors automatically 
    point (point &a)
    {

        x= a.x +2 , y = a.y +2; // Custom-Copy Constructors

       // a.x = 9;
    }

  

    void print() 
    {
        cout<< "(" <<x <<"," <<y <<")" <<endl;
    }
};

int main()
{
    point p;
    p.print();
    
   double a,b;

    cout<< "enter X Co-ordinate";
    cin>> a;
    cout<< "enter Y Co-ordinate";
    cin>>b;

    point q(a,b);
    

    q.print();

    point r(q);

    // point a(p)   copy constructor called
    // point a = p  copy constructor called
    // point a;
    // a = p;       copy constructor not  called
    r.print();
     q.print();
    
}
