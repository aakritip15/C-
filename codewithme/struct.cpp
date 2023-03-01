#include<iostream>

using namespace std;

typedef struct employee
{
    int id ;
    char name;
}ep;


int main()
{
    ep harry; // struct employee harry 

    harry.id = 2;
    harry.name = 'H';
return 0;
}