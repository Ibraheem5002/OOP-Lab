#include <iostream>
using namespace std;

class CricketPlayer
{
private:
    string Name;
    int JerseyNumber;
    float BattingAvg;

public:
    CricketPlayer(string N, int Num, float Avg)
    {
        Name = N;
        JerseyNumber = Num;
        BattingAvg = Avg;
    }

    void ImproveAvg()
    {
        int Runs;
        float Avg;
        int Balls = 0; // representing the ball nunber

        cout << "Enter your Runs of each individual Balls [enter -1 to exit]: " << endl;
        // assuming that data entered is either -1 or in the range: 0 to 6.

        while (1)
        {
            cin >> Runs;
            if (Runs == -1)
            {
                break;
            }
            else
            {
                Avg += Runs;
                Balls++;
            }
        }

        Avg = Avg / Balls;
        BattingAvg += Avg;
    }

    void displayPlayerStats()
    {
        cout << "Name: " << Name << endl;
        cout << "Jersey Number: " << JerseyNumber << endl;
        cout << "Batting Average: " << BattingAvg << endl;

        if (BattingAvg > 30 && BattingAvg < 41)
        {
            cout << "Comment: This is the temperature of Karachi." << endl;
        }
        else if (BattingAvg > 40)
        {
            cout << "Comment: If this would be the temperature of Karachi, maybe the population problem would not exist." << endl;
        }
        else if (BattingAvg < 20 )
        {
            cout << "Comment: This is the dream temperature of any Karachi resident." << endl;
        }
    }

    void PlayMatch()
    {
        ImproveAvg();
    }
};

int main()
{
    string Name;
    int Num;
    float Avg;

    cout << "Enter your Name: ";
    getline(cin,Name);

    cout << "ENter your Jersey Number: ";
    cin >> Num;
    cin.ignore();

    cout << "ENter your Average: ";
    cin >> Avg;

    CricketPlayer P1(Name,Num,Avg);

    P1.displayPlayerStats();
    P1.ImproveAvg();
    P1.PlayMatch();
    P1.displayPlayerStats();
}