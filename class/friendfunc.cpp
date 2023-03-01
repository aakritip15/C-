#include <iostream>

using namespace std;

    class point
    {
     private:
     int x,y;
     friend void test(point &);

     public:

     void setter(int a, int b)
     {
        x = a;
        y = b;
     }
    };

    void test(point &a)
    {
        cout<< a.x << "\n" << a.y <<endl;
    }

    int main()
    {
        point P;

        P.setter(3,4);
        test(P);

    return 0;
    }