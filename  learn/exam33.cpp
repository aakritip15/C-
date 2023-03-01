/*
Kathmandu university different buildings. Create a class to represent a building which will have following data members.
No. of rooms, No. of Labs,No. of Classroom
Create another class room which have data members no. of desk, no. of student(capacity).
Store information about rooms of three buildings and display the information about the building sorted by their no. of capacity
*/
/*
Class Building 
{
};
Class Room 
{
}
*/

#include <iostream>
using namespace std;


 class Classroom 
{
    private:
    int no_of_desk;
    int no_of_capacity;

    public:

    Classroom(int desk =0 , int students = 0)
    {
        no_of_desk = desk;
        no_of_capacity = students;
    }
    void display()
    {
        cout << "The no. of desk is "<<no_of_desk<<endl;
        cout<< "The capacity of class is "<< no_of_capacity<<endl;
    }
   friend class buildings;
};
class buildings
{
    private:
    int no_of_room;
    int no_of_lab;
    int no_of_classroom;
    Classroom * c;
    int building_capacity = 0;

    public:

    friend  void building_sort(buildings [],int size);
    buildings(int rooms=0, int labs=0, int classrooms = 0)
    {
        no_of_room= rooms;
        no_of_lab = labs;
        no_of_classroom = classrooms;
        c = new Classroom(no_of_classroom);
    }

    void set_data_buildings()
    {
        cout<< "Enter the no. of room " <<endl;
        cin>> no_of_room;
         cout<< "Enter the no. of labs " <<endl;
        cin>> no_of_lab;
         cout<< "Enter the no. of classroom " <<endl;
        cin>> no_of_classroom;
          c = new Classroom[no_of_classroom];
        
    }
     void classroom_details(){
        for(int i = 0; i< no_of_classroom; i++)
        {   
            cout << "Enter no. of desk for classroom " <<(i+1) <<endl;
            cin>> (c+i)->no_of_desk ;
            cout << "Enter no. of capacity for students in classroom "<< (i+1) <<endl;
            cin>> (c+i)->no_of_capacity;
            building_capacity += c[i].no_of_capacity;
        }
     }

     void display()

     {
        cout<< "The no. of rooms is" << no_of_room <<endl;
        cout<< "The no. of labs is" << no_of_lab <<endl;
        cout<< "The no. of classrooms is" << no_of_classroom <<endl;
        cout<< "The total capacity of building is" <<building_capacity<<endl;

        for(int i = 0; i<no_of_classroom; i++)
        {   cout<<"For classroom " <<i+1 <<endl;
            c[i].Classroom::display();
        }
        cout << endl <<endl;
     }

};

void building_sort(buildings b[],int size)
{
    for(int i = 0; i <size ; i++)
    {
        for(int j = i+1; j <size; j++)
        {
            if(b[i+1].building_capacity < b[i].building_capacity )
            {
                buildings temp = b[i];
                b[i] = b[i+1];
                b[i+1] = temp;
            }
        }
    }
}


int main()
{
    buildings KU[3];
    for(int i = 0; i < 3 ; i++)
    {   cout << "For Building " <<(i+1)<< endl;
        KU[i].set_data_buildings();
        KU[i].classroom_details();
       // KU[i].display();

    }
    building_sort(KU,3);

    cout << endl <<endl;
    for(int i = 0; i <3; i++)
    {
        KU[i].display();
    }
}