#include <iostream>
using namespace std;

int main()
{
  int* obj;
  obj = new int[2];
  // ob2->day holds 12
  obj[0]= 1;
  obj[1] = 2;
  cout<< obj[0] <<endl;
  cout <<obj[1] <<endl;
  delete obj; // ob2's destructor will get called here, after which it's memory is freed

  return 0;   // ob2 is invalid at this point.
}