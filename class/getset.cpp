#include <iostream>

using namespace std;

    class point
    {
     private:
     int x,y;

     public:

     void setter(int a, int b)
     {
        x = a;
        y = b;
     }
     int getX()
     {
        return x;
     }
    
     int getY()
     {
        return y;
     }
     
     //void print()
     //{
     // cout<< x << y <<endl;
    // }
    };

   
    int main()
    {
        point P;

        P.setter(3,4);
        cout <<P.getX() <<"\n" << P.getY() <<endl;
       // P.print();
    }