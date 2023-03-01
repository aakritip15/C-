#include<iostream>

using namespace std;

int main()
{
    int a =70;
    int*b = &a;

    cout << &a <<endl; //0x16bc73488 address of a
    
    cout<< *b <<endl; //70 pointing a 

    cout << b <<endl; //0x16bc73488 address of a 

    cout << &b <<endl; //0x16bc73480 address of pointer
 
    cout << &(*b) <<endl; //0x16bc73488 address of a 

    //***************** Pointer to the pointer

    int** c = &b;

    cout << &b <<endl; // address of b 
    cout << c <<endl ; // address of b 
    cout << *c << endl; // points b i.e address of a
    cout << **c << endl; //ponts b that points a i.e value of a

    

return 0;
}