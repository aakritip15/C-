#include<iostream>
using namespace std;

class Base{
    protected:
        int a; 
    private:
        int b;
        public:

          void setdata()
        {
            a = 1;
        }
        void getddata()
        {
            cout<< a;

        }
   

};

class Derived: protected Base{
    public:
    /*
        void setdata()
        {
            a = 1;
        }
        void getdata()
        {
            cout<< a;

        }
        */
        void getdata()
        {
          setdata();
          getddata();

        }
   
};

int main(){
    Base b;
    Derived d;
  
    d.getdata(); 
    return 0;
}

