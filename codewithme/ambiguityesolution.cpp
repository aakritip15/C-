// class DerivedC: visibility-mode base1, visibility-mode base2
// {
//      Class body of class "DerivedC"
// };

#include <iostream>

using namespace std;
class Base1
{
public:
    void greet()
    {
        cout << "Good morning" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "Good afternoon" << endl;
    }
};

class Base3
{
public:
    void greet()
    {
        cout << "Good evening" << endl;
    }
};
class Derived : private Base1, private Base2, private Base3
{
public:
    void show()
    {
        Base3 ::greet();
    }
};
int main()
{
    Base1 base1obj;
    Base2 base2obj;
    base1obj.greet();
    base2obj.greet();
    Derived harry;

    harry.show();

    return 0;
}
