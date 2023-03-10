#include <iostream>
using namespace std;
class Shape
{
protected:
    int width, height;

public:
    Shape(int a = 0, int b = 0)
    {
        width = a;
        height = b;
    }
    int area()
    {
        cout << "Parent class area :" << endl;
        return 0;
    }
};
class Rectangle : public Shape
{
public:
    Rectangle(int a = 0, int b = 0)
    {
        Shape(a, b);
    }
    int area()
    {
        cout << "Rectangle class area :" << endl;
        return (width * height);
    }
};
class Triangle : public Shape
{
public:
    Triangle(int a = 0, int b = 0)
    {
        Shape(a, b);
    }
    int area()
    {
        cout << "Rectangle class area :" << endl;
        return (width * height / 2);
    }
};
// Main function for the program
int main()
{
    Shape *shape;
    Rectangle rec(10, 7);
    Triangle tri(10, 5);
    shape = &rec;  // store the address of Rectangle
    shape->area(); // call rectangle area.
    shape = &tri;  // store the address of Triangle
    shape->area(); // call triangle area.
    return 0;
}