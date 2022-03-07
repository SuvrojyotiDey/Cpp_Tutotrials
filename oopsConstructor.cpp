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

        //copy constructor
        Book(Book &obj)//reference to the object is passed here
        {
            price=obj.price;
            pages=obj.pages;
            title=obj.title;
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
    Book book2=book1;
    book2.bookDetails();
    return 0;
}
