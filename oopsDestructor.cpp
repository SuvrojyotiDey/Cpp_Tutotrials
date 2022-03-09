#include<iostream>
using namespace std;
class Book{
    private:
        string title;
        int pages;
        float price;
    public:

        // parameterised constructor
        Book(int Price ,float Pages, string Title)// it should have same class name
        {
            price=Price;
            pages=Pages;
            title=Title;
        } 
        //destructor
        ~Book()
        {
            cout<<"destructor called"<<endl;//called once when object gets out of scope
        }
        void bookDetails()
        {
            cout<<" The title of the books are : "<<title<<endl;
            cout<<" No. of pages in the book   : "<<pages<<endl;
            cout<<" Price of the book          : "<<price<<endl;
            cout<<endl;
        }
};
int main()
{
    Book book1(20,12.3,"Harry Potter");
    book1.bookDetails();
    Book book2(60,62.1,"Harry Putter");
    book2.bookDetails();

    //desctructor will be called two times as two objects were created
    return 0;
}
