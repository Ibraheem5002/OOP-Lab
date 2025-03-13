#include <iostream>
using namespace std;

class Book
{
public:
    string Title, Author, Publisher;

    Book()
    {
        cout << "Hey, look at me! I exist!" << endl;
    }
};

class FictionBook : public Book
{
private:
    string Genre;
public:
    FictionBook()
    {
        Genre = "Fiction";
    }

    FictionBook(string T, string A, string P)
    {
        Title = T;
        Author = A;
        Publisher = P;
        Genre = "Fiction";
    }

    void Display()
    {
        cout << "Title: " << Title << endl;
        cout << "Author: " << Author << endl;
        cout << "Publisher: " << Publisher << endl;
        cout << "Genre: " << Genre << endl;
    }
};

int main()
{
    FictionBook B1("T","A","P");

    B1.Display();
}