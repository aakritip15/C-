// #include<iostream>
// using namespace std;

// class Complex{
//     int real, imaginary;
//     public:
//         void getData(){
//             cout<<"The real part is "<< real<<endl;
//             cout<<"The imaginary part is "<< imaginary<<endl;
//         }

//         void setData(int a, int b){
//             real = a;
//             imaginary = b;
//         }

// };
// int main(){
//     Complex *ptr = new Complex;
//     ptr->setData(1, 54);
//     ptr->getData(); 

//     // Array of Objects
//     Complex *ptr1 = new Complex[4]; 
//     ptr1->setData(1, 4); 
//     ptr1->getData();
//     (ptr1+1)->setData(1, 4); 
//     (ptr1+1)->getData();
//     return 0;
// }
#include<iostream>
using namespace std;

class ShopItem
{
    int id;
    float price;
    public:
        void setData(int a, float b){
            id = a;
            price = b;
        }
        void getData(void){
            cout<<"Code of this item is "<< id<<endl;
            cout<<"Price of this item is "<<price<<endl;
        }
};
int main(){
    int size = 3;
    ShopItem *ptr = new ShopItem [size];
    ShopItem *ptrTemp = ptr;
    int p, i;
    float q;
    for (i = 0; i < size; i++)
    {
        cout<<"Enter Id and price of item "<< i+1<<endl;
        cin>>p>>q;
        // (*ptr).setData(p, q);
        ptr->setData(p, q);
        ptr++; 
    }

    for (i = 0; i < size; i++)
    {   
        cout<<"Item number: "<<i+1<<endl;
        ptrTemp->getData();
        ptrTemp++;
    }
    
    
    return 0;
}
