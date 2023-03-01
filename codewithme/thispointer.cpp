#include <iostream>
using namespace std;

class A
{
    int a;

public:
    A& setData(int a)
    {
        this->a = a;
        return *this; // Returned the object
    }

    void getData()
    {
        cout << "The value of a is " << a << endl;
    }
};

int main()
{
    A a;
    a.setData(4).getData();
    // object.getdata()

    return 0;
}
