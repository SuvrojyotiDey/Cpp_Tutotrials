#include<iostream>
#include<string>
using namespace std;
class Book{
    private: // this can only be accessed by member functions
        float price; // member variables 
        int pages;
        string title;
    public: // can be accessed outside class definition
        void setData(string Title ,float Price,int Pages) // member functions 
        {
            price=Price;
            pages=Pages;
            title=Title;
        }   // user defined constructor
        void bookDetails()
        {
            cout<<" The title of the books are : "<<title<<endl;
            cout<<" No. of pages in the book   : "<<pages<<endl;
            cout<<" price of the book          : "<<price<<endl;
            cout<<endl;
        } 
};
int main()
{
    Book book1,book2;
    book1.setData("Harry Potter 1",1234,365.75);
    book2.setData("Harry Potter 2",326,343.23);
    book1.bookDetails();
    book2.bookDetails();
    return 0;
}