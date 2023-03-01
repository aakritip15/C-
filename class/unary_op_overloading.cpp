#include <iostream>

using namespace std;

class Point
{
public:
    int x, y;

    Point()
    {
        x = 1;
        y = 2;
    }

    Point(int a, int b)
    {
        x = a, y = b;
    }
    void operator++()
    {
        x++;
        y++;
    }

    void operator++(int)
    {
        x++;
        y++;
    }

    void operator*()
    {
        x = x * x;
        y = y * y;
    }

    void display()
    {
        cout << x << y << endl;
    }
};

int main()
{

    Point p(3, 4), q;
    ++p; // p.operator++()
    p.display();

    q++; // q.operator++(1)
    q.display();

    *q;
    q.display();

    *q;
    q.display();

    return 0;
}
