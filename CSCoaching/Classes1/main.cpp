#include <iostream>
#include <string>
using namespace std;

class Library
{
    public:
    string book, isbn, author, publication, company;


    public:
    void bookInfo()
    {
        cout << "\n\n\n________________________________INFORMATION______________________________________"<< endl;

        cout << "Name of the book: " << book << endl;
        cout << "The Isbn number: " << isbn << endl;
        cout << "Name of the Author: " << author << endl;
        cout << "The Date of Publication: " << publication << endl;
        cout << "Name of the Company: " << company << endl;
        cout << "\n\n" << endl;

    }
};
int main()
{

    cout << "\n\n\n\t\t_________________BOOKS_________________\n\n\n" << endl;



    Library book1;
    book1.book = "Championship Fighting";
    book1.isbn = "123456789" ;
    book1.author = "Jack Dempsey";
    book1.publication = "1920";
    book1.company = "Company";


    cout << "\n\n\n__________________________CHAMPIONSHIP FIGHTING______________________"<< endl;
    book1.bookInfo();





    Library book2;
    book2.book ="The Book Of Five Rings";
    book2.isbn = "3783785304234" ;
    book2.author ="Miyamoto Musashi";
    book2.publication = "1643";
    book2.company = "Company";
    cout << "\n\n\n_________________________THE BOOK OF FIVE RINGS___________________________";
    book2.bookInfo();


    return 21;
}
