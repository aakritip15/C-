/*

 YO INCOMPLETE CHHA HAI, PLEASE COMPLETE SOON...

Exercise:

Create 2 calculators
1. Simple Calculator
        Takes input of 2 numbers using a utility function and performs +, - *, /  and displays the result
2. Scientific Calculator:
                Takes input of 2 numbers using a utility function and performs any four scientific operation
                of your choice. and    // displays the results using another function//--> jhyau lagyo yo garna although first function ma gareko chhu so plz consider it

Create a class  Hybrid Calculator and inherit it using these 2 classes:
Q1. What type of inheritance are you using ?
Q2. Which mode of inheritance are you using ?
Q3. Create and object of Hybrid Calculator and display result of simple and
    Scientific calculator.
Q4. How is code reusability implemented?
*/
#include <iostream>
#include <cmath>
using namespace std;

class Simple
{
    float num1, num2; // variables tosstore numbers

    // Some private methods
    float addition(float, float);
    float subtraction(float, float);
    float multiplication(float, float);
    float division(float, float);
public:
    void setNumsSim()
    { // a utility function to take two numbers as input
        cout << "Enter two numbers :" << endl;
        cin >> num1 >> num2;
    }
           
            void process(void);     // This will be used to access the private methods
            void display(void);
}; 

float Simple ::addition(float a, float b)
{
    return a + b;
}
float Simple ::subtraction(float a, float b)
{
    return a - b;
}
float Simple ::multiplication(float a, float b)
{
    return a * b;
}
float Simple ::division(float a, float b)
{
    return a / b;
}

void Simple ::  process (void ){
            
            float addition(float, float);      // Bhaneko thiye tw line 38 ma
            float subtraction(float, float);
            float multiplication(float, float);
            float division(float, float);
        }
void Simple ::display()
{
    cout << "The sum of the numbers is\t\t: " << addition(num1, num2) << endl;
    cout << "The difference of the numbers is\t\t: " << subtraction(num1, num2) << endl;
    cout << "The product of the numbers is\t\t: " << multiplication(num1, num2) << endl;
    cout << "The  result after division of the numbers is " << division(num1, num2) << endl;
}

class Scientific
{
    float numA, numB;

    public:
    void setNumsSci()
    {
        cout << "Take two numbers as input: " << endl;
        cin >> numA >> numB;
    }
    void logarithm();
    void power();
    void sine();
    // void cosine();
    // void display2();
};

void Scientific ::logarithm()
{
    int decision;
    cout << "Chose the type of logarithm:\n1. Natural log(Base e)\n2. Common Log(Base 10)" << endl;
    cin >> decision;
    // while( decision != 1 || decision != 2){
    //     cout<<"Invalid Input. Please try again."<<endl;      -----> Method 1 of input validation
    //     cin>>decision;
    // }


// Method 2 of input Validation
    bool flag = true;
    while (flag == true)
    {

        if (decision == 1)
        {
            cout << "The natural logarithm of " << numA << " is " << log(numA) << endl;
            cout << "The natural logarithm of " << numB << " is " << log(numB) << endl;
            flag = false;
        }
        else if (decision == 2)
        {
            cout << "The common logarithm of " << numA << " is " << log10(numA) << endl;
            cout << "The common logarithm of " << numB << " is " << log10(numB) << endl;
            flag = false;
        }
        else if (decision != '1' && decision != '2')
        {
            cout << "Invalid Option! Please try again.\n";
            cin >> decision;
        
        }
    }
}

void Scientific :: power (  ){
    cout<<numA<<" raised to power "<<numB<<" gives " <<pow( numA, numB);
}
void Scientific :: sine(){
    cout<<"sin("<<numA<<") = "<<sin(numA)<<endl<<"sin("<<numB<<") = "<<sin(numB)<<endl;
}

class Hybrid : public Simple, public Scientific{
    float data1, data2 ;
    public:
        Hybrid(){                // A constructor ( default)
            cout<<"Using hybrid calculator"<<endl;     // --> To distinguish that the calculation was performed using hybrid calculator.
        }

       // void setNumsHyb( ){
        //    cout<<"Enter two numbers: "<<endl;
        //    
     //   }
};

int main()
{
    // Scientific s1;
    // s1.setNumsSci();
    // s1.logarithm();        ----> using scientific calculator

    // Simple op1 ;
    // op1.setNumsSim();
    // op1.process();
    // op1.display();        ------> using simple calculator

    Hybrid hy1;
  //  hy1.setNumsHyb();
    hy1.setNumsSim();
  //  hy1.process();
    hy1.display();         // Example of Hybrid calc using the functions of simple ( Inheritance )
    hy1.setNumsSci();
    hy1.logarithm();
    hy1.power();
    

    return 0;
}
