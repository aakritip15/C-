/*
Write a C++ program to define a base class Item (item-no, name, price). Derive a class
Discounted-Item (discount-percent). A customer purchases 'n' items. Display the item-wise bill 
and total amount using appropriate format.*/

#include <iostream>
using namespace std;


class Item{
    protected:
    int item_no;
    int price;

    public:
    Item(int i = 0, int p =0)
    {
        item_no = i;
        price = p;
    }

    void setInfo(int i , int p )
    {
        item_no = i;
        price = p;
    }
    
    void display()
    {
        cout << "The price of the item of number " << item_no <<"is Rs." <<price <<endl; 
    }

};

class Discounted_Item: public Item {
    private:
    int discount_percentage;

    public:

    Discounted_Item(int i =0 , int p=0, int d =0):Item(i,p)
    {
        discount_percentage= d;
    }
     void setInfo()
    {
        cout << "Enter the item no. " <<endl;
        cin>> item_no;
        cout << "Enter the price of the item " <<endl;
        cin>> price;
        cout << "Enter the discount percentage of the item " <<endl;
        cin>> discount_percentage;
    }
    
    void display()
    {
        cout << "The price of the item of number " << item_no <<"is Rs." <<price <<endl; 
    }
    void Bill()
    {
        float discount_price;
        discount_price = price*0.01*discount_percentage;
        float discounted_price;
        discounted_price = price - discount_price;
        cout << "The Bill of Item No." <<item_no <<endl
            << "The price is Rs." <<price <<endl 
            << "The discount percentage is " <<discount_percentage << "%" <<endl
            << "The payable amount is Rs." <<discounted_price <<endl;
    }
};

int main()
{
    int no_of_item;
    cout<< "Enter the number of items" <<endl;
    cin >> no_of_item;

    Discounted_Item Customer1[no_of_item];

    for(int i = 0; i <no_of_item ; i++)
    {
        Customer1[i].setInfo();
        Customer1[i].Bill();
    }

    return 0;
}