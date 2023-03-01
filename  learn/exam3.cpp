#include <iostream>

using namespace std;

class Student
{
    public:
    int id;
    char * name;
    int canteen_balance;

    public:
    void operator+(int a)
    {
        canteen_balance+= a;

        
    }

    void display()
    {
        cout << "The id is" << id <<endl << "Name is" <<name <<endl <<"Balance is"<< canteen_balance<<endl;
    }


};

class canteen_payment
{
    private:
    Student s;

    public:
    canteen_payment(Student &a)
    {
        s = a;
    }

   void order_food(char * food, int cost)
   {
    cout << " The cost of " << food << "Rs" << cost << "is deducted from your account"<< endl;

    s.canteen_balance -= cost;

    cout <<"Your current balance is" << s.canteen_balance<< endl;
   }

  void load_balance(int balance)
   {

    s.canteen_balance += balance;

    cout <<"Your current balance is" << s.canteen_balance<< endl;
   }

   
};


int main()
{
    Student s;
    s.id = 1;
    s.name = "Aakriti";
    s.canteen_balance = 1500;
    canteen_payment cp(s);
    cp.order_food("daal",20);
    cp.load_balance(50);

  s + 50;
    s.display();

}

