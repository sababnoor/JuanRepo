#include <iostream>
#include <string>
using namespace std;

class Library
{
    private:
    string book, isbn, author, publication, company;

    public:
        Library(string boook, string isbnn, string authorr, string publicationn, string companyy)
        {
            book = boook;
            isbn = isbnn;
            author = authorr;
            publication = publicationn;
            company = companyy;
        }

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



    Library book1("Championship Fighting", "184789127301", "Jack Dempsey", "1920", "Company");

    cout << "\n\n\n__________________________CHAMPIONSHIP FIGHTING______________________"<< endl;
    book1.bookInfo();



    Library book2("The Book Of Five Rings", "292849182432", "Miyamoto Musashi", "1643", "COmpany");

    cout << "\n\n\n_________________________THE BOOK OF FIVE RINGS___________________________";
    book2.bookInfo();


    return 21;
}
