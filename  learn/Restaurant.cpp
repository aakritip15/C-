/*
Write a program to deal food orders of a restaurant and calculate bill amount having following details

Define a class "Food" having data members
    Dish Name: string data type
    Price: int data type

    and class "TableInfo" having following data members

    TableNo: Unique integer data member
    Menu: Data member which is an array object of class "Food"

The third class "BillAmount" which is derived from class "TableInfo" and has data members: NetAmt: Bill Amount of food
VAT: 13% of NetAmt, ServiceCharge: 10% of NetAmt and GrossAmt = NetAmt + VAT + ServiceCharge



Create an array to store information about customers at 5  different table using runtime polymorphism. Write a program to
display bill of each table dealing NetAmt, VAT, ServiceCharge and GrossAmt

*/

#include <iostream>
#include <cstring>

using namespace std;

class Food
{
public:
    string foodName;
    int price;
    friend class TableInfo;
    friend class BillAmount;
    friend class Restaurant;
};

class Restaurant
{
private:
    int ListNo;
    Food *Menu;

public:
    void set_Menu()
    {

        cout << "Enter the number of list you want to add on the list" << endl;
        cin >> ListNo;

        Menu = new Food[ListNo];

        for (int i = 0; i < ListNo; i++)
        {
            cout << "Enter the food for list no. " << (i + 1) << endl;
            cin >> (Menu + i)->foodName;
            cout << "Enter the price for this food " << (i + 1) << endl;
            cin >> (Menu + i)->price;
        }
    }

    Food *get_Menu()
    {
        return Menu;
    }

    int get_listno()
    {
        return ListNo;
    }
};

class TableInfo
{
protected:
    int TableNo;
    int ListNo;
    Food *Menu;

public:
    void set_no()
    {
        cout << "Enter the table no." << endl;
        cin >> TableNo;
    }

    TableInfo(Food *menu = 0, int l = 0)
    {
        Menu = menu;
        ListNo = l;
    }
    void set_Men(Food *menu, int l)
    {
        Menu = menu;
        ListNo = l;
    }
    void set_Menu()
    {

        cout << "Enter the number of list you want to add on the list" << endl;
        cin >> ListNo;

        Menu = new Food[ListNo];

        for (int i = 0; i < ListNo; i++)
        {
            cout << "Enter the food for list no. " << (i + 1) << endl;
            cin >> (Menu + i)->foodName;
            cout << "Enter the price for this food " << (i + 1) << endl;
            cin >> (Menu + i)->price;
        }
    }

    void get_Menu()
    {
        for (int i = 0; i < ListNo; i++)
        {
            cout << "The food for list no. " << (i + 1) << "is" << (Menu + i)->foodName << endl;
            cout << "The price for this food " << (Menu + i)->price << endl;
        }
    }
};

class BillAmount : public TableInfo

{
protected:
    int NetAmt = 0;
    int VAT;
    int ServiceCharge;
    int GrossAmount;

public:
    int makeBill()
    {
        string* dish;
        int no_of_Dish;
        
        int Bill ;
        // cout << "Enter the name of the dish" << endl;
        // cin >> dish;

        cout << "Enter total no of dish" <<endl;
        cin>>no_of_Dish;

        dish = new string[no_of_Dish];
        for(int i = 0; i <no_of_Dish; i++)
        {
            cout << "Enter the name of the dish" << endl;
        cin >> dish[i];
        }


        for(int j = 0; j <no_of_Dish ; j++)
        {
            Bill = 0;
        for (int i = 0; i < ListNo; i++)
        {
            int result = dish[j].compare((Menu + i)->foodName);
            if (result == 0)
            {
                NetAmt += (Menu + i)->price;
                Bill = 1;
            }
        }
        if(Bill ==0)
        {
            cout <<"Sorry the dish is not there" <<endl;
        }

        }


        delete[]Menu;
        return Bill;
    }

    void printBill()
    {
        VAT = 0.13 * NetAmt;
        ServiceCharge = 0.1 * NetAmt;
        GrossAmount = NetAmt + VAT + ServiceCharge;

        cout << "Your Net Amount is " << NetAmt << endl;
        cout << "Your VAT Amt is " << VAT << endl;
        cout << "Your Service Charge is " << ServiceCharge << endl;
        cout << "Your Gross Amount is " << GrossAmount << endl;
    }
};

int main()
{

    Restaurant KUCanteen;
    KUCanteen.set_Menu();


    int NoOfTable;
    cout << "Enter the number of tables";
    cin >> NoOfTable;
    BillAmount bills[NoOfTable];
    for (int i = 0; i < NoOfTable; i++)
    {
        cout << "For table " << (i + 1) << endl;
        bills[i].set_Men(KUCanteen.get_Menu(), KUCanteen.get_listno());
        // bills[i].makeBill();
        if (bills[i].makeBill() != 0)
            bills[i].printBill();
    }
}