#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class Book
{
public:
    string Title, Author;
    float Price;

    Book()
    {
        Title = "N/A";
        Author = "N/A";
        Price = -1;
    }

    Book(string Title1, string Author1, float Price1)
    {
        Title = Title1;
        Author = Author1;
        Price = Price1;
    }

    Book(Book &B)
    {
        Title = B.Title;
        Author = B.Author;
        Price = B.Price;
    }

    Book(string Title1)
    {
        Title = Title1;
        Author = "Unknown";
        Price = 0.0;
    }

    void display()
    {
        cout << "Title: " << Title << endl;
        cout << "Author: " << Author << endl;
        cout << "Price: " << Price << endl;
    }
};

int main()
{
    Book B1;
    Book B2("title", "nobody", 6.90);
    Book B3(B2);
    Book B4("not a scam");

    B1.display();
    B2.display();
    B3.display();
    B4.display();
}