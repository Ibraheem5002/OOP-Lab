#include <iostream>
using namespace std;

class Character
{
public:
    int Health, Damage;

    Character()
    {
        cout << "A character is born." << endl;
    }

    void Display()
    {
        cout << "Health: " << Health << endl;
        cout << "Damage: " << Damage << endl;
    }
};

class Player : public Character
{
public:
    string Name;

    Player()
    {
        Name = "N/A";
        Health = 0;
        Damage = 0;
    }

    Player(string N, int H, int D)
    {
        Name = N;
        Health = H;
        Damage = D;
    }

    void Display()
    {
        cout << "Player Stats" << endl;
        cout << "Name: " << Name << endl;
        cout << "Health: " << Health << endl;
        cout << "Damage: " << Damage << endl;
    }
};

class Enemy : public Character
{
public:
    string Name;

    Enemy()
    {
        Name = "N/A";
        Health = 0;
        Damage = 0;
    }

    Enemy(string N, int H, int D)
    {
        Name = N;
        Health = H;
        Damage = D;
    }

    void Display()
    {
        cout << "Enemy Stats" << endl;
        cout << "Name: " << Name << endl;
        cout << "Health: " << Health << endl;
        cout << "Damage: " << Damage << endl;
    }
};

class Wizard : public Player
{
public:
    string Weapon;

    Wizard()
    {
        Name = "N/A";
        Health = 0;
        Damage = 0;
        Weapon = "N/A";
    }

    Wizard(string N, int H, int D)
    {
        Name = N;
        Health = H;
        Damage = D;
        Weapon = "Magic Staff";
    }

    void Display()
    {
        cout << "Wizard Player Stats" << endl;
        cout << "Name: " << Name << endl;
        cout << "Health: " << Health << endl;
        cout << "Damage: " << Damage << endl;
    }
};

int main()
{
    Wizard W1("Ibrahim", 100,100);

    W1.Display();
}