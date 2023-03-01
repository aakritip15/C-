/* Define class "Book" having data members "Name" and "Auther" both of type
string. Define two class "Reference Book" and "Issuable Book" havinf following details:

Reference Book:
Genre: Data member which can store genre details (string)

Issuable Book:
Issue Date: YYYYMMDD format Date, Return Date : YYYYMMDD format Date
Fine: Integer Data member (rs 5 per day after the return Date) and 
IssueID: Unique integer data member (starts with 1 and auto incremented by 1 in every issue)

Create an array to store information about 5 issuable book. Implement run time 
polymorphism to display information about issued book acoording to the particular 
issueID stores by the user.[Make necessary assummptions]
*/

#include <iostream>
#include <cstring>
using namespace std;


class Book 
{ 
    protected:

    string name;
    string author;

    public:

    void setBookInfo()
    {
        cout << "Enter the name of the Book" <<endl;
        cin>> name;

        cout << "Enter the auther of the book " << endl;
        cin>> author;
    }

};

class ReferenceBook: public Book
{
    private:

    string genre;

    public:
    void setBookInfo()
    { Book::setBookInfo();
        cout << "Enter the genre of the Book" <<endl;
         getline( cin, genre);
    }

};

int main()
{
    ReferenceBook r;
    r.setBookInfo();
}