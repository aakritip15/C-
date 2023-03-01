#include<iostream>
using namespace std;

class Try{
    int a, b ;
    public:
        Try(){
            a = 5 ;
            b = 10 ;
        }

        Try operator*( int &num)
        {
            Try temp;
            temp.a = a*num ;
            temp.b = b*num ;
            return temp ;
        }
};
int main(){
    
    Try t1, t2 ;
    int a =5;
    t2 = t1*a ;
    
    return 0 ; 
}