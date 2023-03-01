#include <iostream>

using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
}

int& swap1(int &a, int &b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;

    return a;
}

int main()
{
    int x = 10;
    int y = 20;

    int &z = x;

    cout<<z <<"\n";
    cout << &z <<endl; // same
    cout << &x <<endl; //      address


    swap(x,y);
    cout<< x << " \n" <<y << endl;


    int a = 11;
    int b = 22;

    swap1(a,b) = 33;

    cout << "a is " <<a <<endl;
    cout << "b is " << b <<endl;




}