#include<iostream>
using namespace std;

class Student{
    protected:
        int roll_no;
    public:
        Student(int a=0){
            roll_no = a;
            cout<<"base"<<endl;
        }
        void print_number(void){
            cout<<"Your roll no is "<< roll_no<<endl;
        }
};

class Test : virtual public Student{
    protected:
        float maths, physics;
        public:
            Test(int roll=0,float m1=0, float m2=0):Student(roll){
                maths = m1;
                physics = m2;
                cout<<"test"<<endl;
            }

            void print_marks(void){
                cout << "You result is here: "<<endl
                     << "Maths: "<< maths<<endl
                     << "Physics: "<< physics<<endl;
            }
};

class Sports:virtual public Student{
    protected:
        float score;
    public:
        Sports(int roll=0,float sc=0):Student(roll){
            score = sc;
        }

        void print_score(void){
            cout<<"Your PT score is "<<score<<endl;
        }

};

class Result : public Test, public Sports{
    private:
        float total;
    public:
        Result(int roll=0,int math=0, int physics=0, int score=0): Test(roll,math,physics),Student(roll),Sports(roll, score)
        {}

        void display(void){
            total = maths + physics + score;
            print_number();
            print_marks();
            print_score();
            cout<< "Your total score is: "<<total<<endl;
        }
};
int main(){
    Result harry(1,2,3,4);
    harry.display();
    return 0;
}
