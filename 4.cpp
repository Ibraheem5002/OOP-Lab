#include <iostream>
using namespace std;

class Airport
{
public:
    int ID;
    string Location;

    Airport(string L, int I)
    {
        ID = I;
        Location = L;
    }
};

class Flight
{
private:
    int ID;
    string Status;
    string Departure;
    string Arrival;
    string Detour;

    int Airport_ID;
    string Airport_Location;
public:
    Flight(int I)
    {
        ID = I;
    }

    void setInfo(Airport &A)
    {
        int O;

        cout << "Set Departure: ";
        getline(cin,Departure);

        cout << "Set Arrival: ";
        getline(cin,Arrival);

        cout << "Is there a Detour[1 for Yes, 0 for No]: ";
        cin >> O;
        cin.ignore();

        if (O == 1)
        {
            cout << "Set Detour: ";
            getline(cin,Detour);
        }
        else
        {
            Detour = "N/A";
        }
        

        cout << "Set status: ";
        getline(cin,Status);

        Airport_ID = A.ID;
        Airport_Location = A.Location;
    }

    void getInfo()
    {
        cout << "ID: " << ID << endl;
        cout << "Departure: " << Departure << endl;
        cout << "Arrival: " << Arrival << endl;
        cout << "Detour: " << Detour << endl;
        cout << "Status: " << Status << endl;
        cout << "Going to Airport: " << Airport_ID << endl;
        cout << "Located At: " << Airport_Location << endl;
    }

    void Display()
    {
        getInfo();
    }
};

int main()
{
    Airport airport1("New York", 101);
    Flight flight1(202);

    flight1.setInfo(airport1);

    cout << "\nFlight Information:\n";
    flight1.Display();
}