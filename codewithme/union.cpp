#include<iostream>

using namespace std;

union money
{
    /* data */
    int rice; //4
    char car; //1
    float pounds; //4
};


int main()
{
    union money m1;
        m1.rice = 34;
        cout<<m1.rice;
        return 0;

return 0;
}