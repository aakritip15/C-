#include<iostream>

using namespace std;

class Point 
{
    public:
    int x,y;

    Point()
    {
        x =10, y =11;
        cout<< "Default Constructors" <<endl;

    }

    Point(int a, int b)
    {
        x = a, y =b;      
        cout <<"Parameterized Constructors" <<endl;
    }

    ~Point()
    {
        cout << "Destructor called" <<x <<y <<endl;
    }


    void display()
    {
        cout<<"displayed"<<endl;
    }
};

void abc()
{
    Point p2;
    
    // Constructor called
    //Destructor called
}
int main()
{   Point();
    Point p1; //Constructor called
    p1.~Point();

    abc();
    {
        Point p3(2,3);
        //  p3 constructor called
        // p3 destructor called
    }
    // p1 destructor called

    p1.display();
return 0;
}