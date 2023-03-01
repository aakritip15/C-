// #include<iostream>
// #include<fstream>

// using namespace std;

// int main(){
//     string st = "This is Aakriti";
//     // Opening files using constructor and writing it
//     ofstream out("file.txt"); // Write operation
//     out<<st;

//     string st2;
//     // Opening files using constructor and reading it
//     ifstream in("filesb.txt"); // Read operation
//     getline(in, st2);  
//     cout<< st2<<endl; 


//     return 0;
// }


#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    ifstream myFile_Handler;
    string myLine;

    // File Open in the Read Mode
    myFile_Handler.open("filesb.txt");

    if(myFile_Handler.is_open())
    {
        // Keep reading the file
        while(getline(myFile_Handler, myLine))
        {
            // print the line on the standard output
            cout << myLine << endl;
        }
    // File Close
    myFile_Handler.close();
    }
    else
    {
        cout << "Unable to open the file!";
    }
    return 0;
}

// #include<iostream>
// #include<fstream>
 
// using namespace std;
 
// int main(){
 
//               // connecting our file with hout stream
//                ofstream hout("files.txt");
   
//                // creating a name string variable and filling it with string entered by the user
//               string name;
//                cout<<"Enter your name: ";
//               cin>>name;
     
//              // writing a string to the file
//              hout<<name + " is my name";
 
//             // disconnecting our file
//             hout.close();
//             // connecting our file with hin stream
//            ifstream hin("files.txt");
 
//           // creating a content string variable and filling it with string present there in the text file
//            string content;
//             hin>>content;
//            cout<<"The content of the file is: "<<content;
 
//            // disconnecting our file
//            hin.close();
//            return 0;
// }
