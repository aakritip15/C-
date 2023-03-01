#include<iostream>

using namespace std;
class Y;

class X{
    int data;
    public:
        void setValue(int value){
            data = value;
        }
        void print()
        {
            cout <<data <<endl;
        }
    friend void swap(X &, Y &);    
};

class Y{
    int num;
    public:
        void setValue(int value){
            num = value;
        }

        void print()
        {
            cout <<num << endl;
        }
    friend void swap(X &, Y &);    

};

void swap(X &o1, Y &o2){
    int temp;
    temp = o1.data;
    o1.data = o2.num;
    o2.num = temp;
}

int main()
{
    X a1;
    a1.setValue(3);
    a1.print();

    Y b1;
    b1.setValue(15);
    b1.print();


    swap(a1, b1);
    a1.print();
    b1.print();


    

  
return 0;
}