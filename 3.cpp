#include <string>
#include <iostream>
using namespace std;

class SmartDevice
{
private:
    string Name;
    string Type;
    bool Status;

public:
    SmartDevice(string N, string T, bool S)
    {
        Name = N;
        Type = T;
        Status = S;
    }

    void ChangeStatus()
    {
        cout << "Enter your device New Status [1 for ON, 0 for OFF]: ";
        cin >> Status;
    }

    void ChangeName()
    {
        cout << "Enter your device New Name: ";
        getline(cin,Name);
    }

    void ChangeType()
    {
        cout << "Enter your device New Type: ";
        getline(cin,Type);
    }

    void Display()
    {
        cout << "Name: " << Name << endl;
        cout << "Type: " << Type << endl;
        cout << "Status: " << Status << endl;
    }


    ~SmartDevice()
    {
        cout << "Device: " << Name << " has been shut down." << endl;
    }
};

int main()
{
    string Name, Type;
    bool Status;

    cout << "Enter your device Name: ";
    getline(cin, Name);

    cout << "Enter your device Type: ";
    getline(cin, Type);

    cout << "Enter your device Status [1 for ON, 0 for OFF]: ";
    cin >> Status;
    cin.ignore();

    cout << endl;

    SmartDevice Device1(Name,Type,Status);

    Device1.Display();
    Device1.ChangeName();
    Device1.ChangeType();
    Device1.ChangeStatus();
    Device1.Display();

    cout << endl;
}