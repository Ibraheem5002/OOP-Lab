#include <iostream>
using namespace std;

class FootballPlayer
{
private:
    string PlayerName;
    string Position;
    int GoalCount;

public:
    FootballPlayer()
    {
        PlayerName = "Unknown Player";
        Position = "Benchwarmer";
        GoalCount = 0;
    }

    FootballPlayer(string Name, string Pos, int Goals)
    {
        PlayerName = Name;
        Position = Pos;
        GoalCount = Goals;
    }

    FootballPlayer(FootballPlayer &P)
    {
        PlayerName = P.PlayerName;
        Position = P.Position;
        GoalCount = P.GoalCount;
    }

    FootballPlayer(string Name)
    {
        PlayerName = Name;
        Position = "Midfielder";
        GoalCount = 10;
    }

    void Display()
    {
        cout << "Name: " << PlayerName << endl;
        cout << "Position: " << Position << endl;
        cout << "Goal Count: " << GoalCount << endl;
    }
};

int main()
{
    string Name = "Player";
    string Position = "Defender";
    int Goals = 11;

    FootballPlayer P1;
    FootballPlayer P2(Name,Position,Goals);
    FootballPlayer P3(Name);
    FootballPlayer P4(P2);

    P1.Display();
    cout << endl;

    P2.Display();
    cout << endl;

    P3.Display();
    cout << endl;

    P4.Display();
    cout << endl;
}