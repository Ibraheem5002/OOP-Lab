#include <iostream>
#include <string>
using namespace std;

class BoardMarker
{
public:
    string Company;
    string Color;
    bool Refillable;
    bool Ink_Status;

    void Enter_Info()
    {
        cout << "enter company: ";
        getline(cin, Company);

        cout << "enter color: ";
        getline(cin, Color);

        cout << "is refillable [1 for Yes, 0 for No]: ";
        cin >> Refillable;
        cin.ignore();

        cout << "Ink Status [1 for fillled, 0 for empty]: ";
        cin >> Ink_Status;
        cin.ignore();
    }

    void write()
    {
        if (Ink_Status != 0)
        {
            string Text;
            cout << "Enter your text for writing: ";
            getline(cin, Text);

            cout << endl << Text << endl;
        }
        else
        {
            cout << "Writing not possible" << endl;
        }
    }

    void refill()
    {
        if (Ink_Status == 0)
        {
            cout << "refill is possible" << endl;
        }
        else
        {
            cout << "refill not possible";
        }
    }
};

int main()
{
    BoardMarker Marker1;

    Marker1.Enter_Info();

    Marker1.refill();
    cout << endl;
    Marker1.write();
}