#include <iostream>
#include <string>
using namespace std;

struct Library
{
    int ID;
    string Title;
    string Author;
    int Year;
    string Genre;
};

void Declaring(int Total, Library *Book)
{
    for (int i = 0; i < Total; i++)
    {
        Book[i].ID = i + 1;
        Book[i].Author = "N/A";
        Book[i].Genre = "N/A";
        Book[i].Title = "N/A";
        Book[i].Year = 0;
    }
}

void Display(Library &Book)
{
    cout << "Title: " << Book.Title << endl;
    cout << "Author: " << Book.Author << endl;
    cout << "Publication Year: " << Book.Year << endl;
    cout << "Genre: " << Book.Genre << endl;
    cout << endl;
}

void Add_Book(Library &Book)
{
    cout << "Enter information as prompt: " << endl << endl;

    cout << "Title: ";
    getline(cin, Book.Title);
    cout << "Author: ";
    getline(cin, Book.Author);
    cout << "Publication Year: ";
    cin >> Book.Year;
    cin.ignore();
    cout << "Genre: ";
    getline(cin, Book.Genre);
}

void Update_Book(Library &Book)
{
    int Option;
    cout << "What do you want to update[1 for Title, 2 for Author, 3 for Year, 4 for Genre, 0 for exit]: ";
    cin >> Option;

    cin.ignore();

    switch (Option)
    {
    case 1:
        cout << "Enter your new Title: ";
        getline(cin, Book.Title);
        break;
    
    case 2:
        cout << "Enter your new Author: ";
        getline(cin, Book.Author);
        break;

    case 3:
        cout << "Enter your new Year: ";
        cin >> Book.Year; 
        cin.ignore();
        break;

    case 4:
        cout << "Enter your new Genre: ";
        getline(cin, Book.Genre);
        break;

    default:
        return;
    }
}

int Search_Book(int Total, Library *Book)
{
    int Option;

    cout << "By what feature do you wanna search [1 for Title, 2 for Author, 3 for Year, 4 for Genre, 0 for exit]: ";
    cin >> Option;
    cin.ignore();

    if (Option == 1)
    {
        string Search;
        int Found_ID = -1;
        
        cout << "Enter your search term: ";
        getline(cin, Search);

        for (int i = 0; i < Total; i++)
        {
            if (Search == Book[i].Title)
            {
                Found_ID = Book[i].ID;
                Display(Book[i]);
                return Found_ID;
            }   
        }
    }
    else if (Option == 2)
    {
        string Search;
        int Found_ID = -1;
        
        cout << "Enter your search term: ";
        getline(cin, Search);

        for (int i = 0; i < Total; i++)
        {
            if (Search == Book[i].Author)
            {
                Found_ID = Book[i].ID;
                Display(Book[i]);
                return Found_ID;
            }
        }
    }
    else if (Option == 3)
    {
        int Search;
        int Found_ID = -1;
        
        cout << "Enter your search term: ";
        cin >> Search;
        cin.ignore();

        for (int i = 0; i < Total; i++)
        {
            if (Search == Book[i].Year)
            {
                Found_ID = Book[i].ID;
                Display(Book[i]);
                return Found_ID;
            }
        }
    }
    else if (Option == 4)
    {
        string Search;
        int Found_ID = -1;
        
        cout << "Enter your search term: ";
        getline(cin, Search);

        for (int i = 0; i < Total; i++)
        {
            if (Search == Book[i].Genre)
            {
                Found_ID = Book[i].ID;
                Display(Book[i]);
                return Found_ID;
            }
        }
    }
    else
    {
        return 0;
    }   
}

void Add_New_Book(int Total, Library *Book)
{
    int New_ID = Total + 1;
    Add_Book(Book[Total]);
    Book[Total].ID = New_ID;
}

int main()
{
    int Total;
    int Option;
    int Found_ID;

    cout << "Enter the number of books: ";
    cin >> Total;

    Library Book[Total];
    cin.ignore();

    Declaring(Total, Book);

    cout << "Enter the details of existing books: " << endl;
    for (int i = 0; i < Total; i++)
    {
        cout << "Author: ";
        getline(cin, Book[i].Author);
        cout << "Genre: ";
        getline(cin, Book[i].Genre);
        cout << "Title: ";
        getline(cin, Book[i].Title);
        cout << "Year: ";
        cin >> Book[i].Year;
        cin.ignore();
        cout << endl;
    }

    while (1)
    {
        cout << "What feature would you like to use [1 for Search, 2 for Updating, 3 for Add a New book, 0 for Exiting]: ";
        cin >> Option;
        cin.ignore();

        switch(Option)
        {
        case 0:
            cout << "Thank you for using our services!" << endl;
            return 0;
        
        case 1:
            Search_Book(Total, Book);
            break;

        case 2:
            cout << "Please search for your book first" << endl;
            Found_ID = Search_Book(Total, Book);
            if (Found_ID > 0)
                Update_Book(Book[Found_ID - 1]);
            break;

        case 3:
            Add_New_Book(Total, Book);
            Total++;
            break;

        default:
            break;
        }
    }
}