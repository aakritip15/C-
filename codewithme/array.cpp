#include<iostream>

using namespace std;

int main()
{
    int marks[] = {1,20,3,4,5,6};

    cout<< marks <<endl; // address of first element of marks

    int*p = marks;

    cout << p <<endl; // address of first element of marks

    cout << *p <<endl; //marks[0]

    cout << *(++p) <<endl; //marks[1]

    cout << *(++p) <<endl; //marks[2]

    cout << ++(*p) <<endl; //marks[2] +1 

    cout << p  <<endl;  // address of marks[2]

    cout <<(p+1)  <<endl;  //address of marks[3]

    cout << (p+2)  <<endl;   // adddress of marks [4]


return 0;
}