#include <iostream>
using namespace std;

class Phone
{
private:
    int ID;
    int Battery_ID;
    int Capacity;
public:
    Phone(int I, int B, int C)
    {
        ID = I;
        Battery_ID = B;
        Capacity = C;
    }

    void Display()
    {
        cout << "Phone ID: " << ID << endl;
        cout << "Battery ID: " << Battery_ID << endl;
        cout << "Capacity: " << Capacity << endl;
    }
};