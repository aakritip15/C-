#include <iostream>
#include "namespace.h"
using namespace std;
using namespace n_name;

void foo(int x) //function declared
{
  //prints the value of x passed within parameters
  cout<< "The value of x in main is: " << x << endl;
}

int main() {
  // declare variable x 
  int x = 10;
  
  foo(x); //call function foo
  n_name:: foo(); //call function foo defined in namespace
  cout << y <<endl;
  return 0;
  
}