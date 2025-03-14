#include <iostream>
using namespace std;

class Position
{
public:
    int X, Y, Z;

    Position()
    {
        X = 0;
        Y = 0;
        Z = 0;
    }

    Position(int X1, int Y1, int Z1)
    {
        X = X1;
        Y = Y1;
        Z = Z1;
    }
};

class Health_Bar
{
public:
    int Health;

    Health_Bar()
    {
        Health = 0;
    }

    Health_Bar(int H)
    {
        Health = H;
    }
};

class Character : public Position, public Health_Bar
{
public:
    string Weapon;
    string Name;

    Character(int X1, int Y1, int Z1, int H, string W, string N)
    {
        cout << "A character is born." << endl;
        X = X1;
        Y = Y1;
        Z = Z1;

        Health = H;

        Weapon = W;
        Name = N;
    }

    void Display()
    {
        cout << Name << " Stats:" << endl;
        cout << "Position: (" << X << "," << Y << "," << Z << ")" << endl;
        cout << "Health: " << Health << endl;
        cout << "Weapon: " << Weapon << endl;
    }
};

int main()
{
    Character C(0,0,0,100,"Sword","Ibrahim");
    C.Display();
}