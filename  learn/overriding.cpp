//sample program
#include<iostream>
using namespace std;
class B
{
public:
void display ( )
{
cout<<"\nI am learning C++\n";
}
};
class D: public B
{
public:
void display ( )
{
cout<<"\nI learned C\n";
}
};
int main ( )
{
D d;
d.display ( );
//overrides the definition of base class
d.B::display ( );
//calls base class member function
d.D::display ( );
//calls derived class member function
return 0;
}