#include <iostream>

using namespace std;

class CWH{
    protected:
        string title;
        float rating;
    public:
        CWH(string s="", float r=0){
            title =  s;
            rating = r;
        }
   virtual void display()=0; // Can't make object from the abstract class
};
class CWHVideo: public CWH
{
    float videoLength;
    public:
        CWHVideo(string s=0, float r=0, float vl=0): CWH(s, r){
            videoLength = vl;
        }
        void display(){
            cout<<"This is an amazing video with title "<<title<<endl;
            cout<<"Ratings: "<<rating<<" out of 5 stars"<<endl;
            cout<<"Length of this video is: "<<videoLength<<" minutes"<<endl;
        }
};    
class CWHText: public CWH
{
    int words;
    public:
        CWHText(string s=0, float r=0, int wc=0): CWH(s, r){
            words = wc;
        }
     void display(){
      cout<<"This is an amazing text tutorial with title "<<title<<endl;
      cout<<"Ratings of this text tutorial: "<<rating<<" out of 5 stars"<<endl;
      cout<<"No of words in this text tutorial is: "<<words<<" words"<<endl;
         }
};

int main(){
    string title;
    float rating, vlen;
    int words;

    // for Code With Harry Video
    title = "Django tutorial";
    vlen = 4.56;
    rating = 4.89;
    CWHVideo djVideo(title, rating, vlen);

    // for Code With Harry Text
    title = "Django tutorial Text";
    words = 433;
    rating = 4.19;
    CWHText djText(title, rating, words);


    // CWH base   will throw error
    CWH* tuts[2];

    tuts[0] = &djVideo;
    tuts[1] = &djText;
     
    tuts[0]->display();
    tuts[1]->display();

    return 0;
}
