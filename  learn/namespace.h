#include <iostream>
using namespace std;
namespace n_name{// namespace declared
    int x= 100; // variable x within namespace
    int y =88;
    void foo() // function foo within namespace
    {
      //prints the value of x defined within namespace
      cout<< "The value of x in namespace is: "<< x <<endl;
    }
  }
