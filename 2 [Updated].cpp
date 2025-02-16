#include <iostream>
using namespace std;

class WeekDays
{
private:
    string Days[7];
    int CurrentDay;

public:
    WeekDays()
    {
        int i = 0;
        Days[i] = {"Mon"};
        i++;
        Days[i] = {"Tue"};
        i++;
        Days[i] = {"Wed"};
        i++;
        Days[i] = {"Thu"};
        i++;
        Days[i] = {"Fri"};
        i++;
        Days[i] = {"Sat"};
        i++;
        Days[i] = {"Sun"};
    }

    WeekDays(int N)
    {
        CurrentDay = N;

        if (N < 1)
        {
            cout << "Invalid Input." << endl;
        }
        else if (N >= 1 && N <= 7)
        {
            N--;

            switch (N)
            {
            case 0:
                Days[0] = {"Mon"};
                Days[1] = {"Tue"};
                Days[2] = {"Wed"};
                Days[3] = {"Thu"};
                Days[4] = {"Fri"};
                Days[5] = {"Sat"};
                Days[6] = {"Sun"};
                break;
            
            case 1:
                Days[0] = {"Sun"};
                Days[1] = {"Mon"};
                Days[2] = {"Tue"};
                Days[3] = {"Wed"};
                Days[4] = {"Thu"};
                Days[5] = {"Fri"};
                Days[6] = {"Sat"};
                break;

            case 2:
                Days[0] = {"Sat"};
                Days[1] = {"Sun"};
                Days[2] = {"Mon"};
                Days[3] = {"Tue"};
                Days[4] = {"Wed"};
                Days[5] = {"Thu"};
                Days[6] = {"Fri"};
                break;

            case 3:
                Days[0] = {"Fri"};
                Days[1] = {"Sat"};
                Days[2] = {"Sun"};
                Days[3] = {"Mon"};
                Days[4] = {"Tue"};
                Days[5] = {"Wed"};
                Days[6] = {"Thu"};
                break;

            case 4:
                Days[0] = {"Thu"};
                Days[1] = {"Fri"};
                Days[2] = {"Sat"};
                Days[3] = {"Sun"};
                Days[4] = {"Mon"};
                Days[5] = {"Tue"};
                Days[6] = {"Wed"};
                break;

            case 5:
                Days[0] = {"Wed"};
                Days[1] = {"Thu"};
                Days[2] = {"Fri"};
                Days[3] = {"Sat"};
                Days[4] = {"Sun"};
                Days[5] = {"Mon"};
                Days[6] = {"Tue"};
                break;

            case 6:
                Days[0] = {"Tue"};
                Days[1] = {"Wed"};
                Days[2] = {"Thu"};
                Days[3] = {"Fri"};
                Days[4] = {"Sat"};
                Days[5] = {"Sun"};
                Days[6] = {"Mon"};
                break;

            default:
                break;
            }
        }

        else
        {
            int Temp = N % 7;
            if (Temp != 0)
            {
                N = Temp;
            }
            else
            {
                Temp = N / 7;
                N = Temp;
            }

            switch (N)
            {
            case 0:
                Days[0] = {"Mon"};
                Days[1] = {"Tue"};
                Days[2] = {"Wed"};
                Days[3] = {"Thu"};
                Days[4] = {"Fri"};
                Days[5] = {"Sat"};
                Days[6] = {"Sun"};
                break;
            
            case 1:
                Days[0] = {"Sun"};
                Days[1] = {"Mon"};
                Days[2] = {"Tue"};
                Days[3] = {"Wed"};
                Days[4] = {"Thu"};
                Days[5] = {"Fri"};
                Days[6] = {"Sat"};
                break;

            case 2:
                Days[0] = {"Sat"};
                Days[1] = {"Sun"};
                Days[2] = {"Mon"};
                Days[3] = {"Tue"};
                Days[4] = {"Wed"};
                Days[5] = {"Thu"};
                Days[6] = {"Fri"};
                break;

            case 3:
                Days[0] = {"Fri"};
                Days[1] = {"Sat"};
                Days[2] = {"Sun"};
                Days[3] = {"Mon"};
                Days[4] = {"Tue"};
                Days[5] = {"Wed"};
                Days[6] = {"Thu"};
                break;

            case 4:
                Days[0] = {"Thu"};
                Days[1] = {"Fri"};
                Days[2] = {"Sat"};
                Days[3] = {"Sun"};
                Days[4] = {"Mon"};
                Days[5] = {"Tue"};
                Days[6] = {"Wed"};
                break;

            case 5:
                Days[0] = {"Wed"};
                Days[1] = {"Thu"};
                Days[2] = {"Fri"};
                Days[3] = {"Sat"};
                Days[4] = {"Sun"};
                Days[5] = {"Mon"};
                Days[6] = {"Tue"};
                break;

            case 6:
                Days[0] = {"Tue"};
                Days[1] = {"Wed"};
                Days[2] = {"Thu"};
                Days[3] = {"Fri"};
                Days[4] = {"Sat"};
                Days[5] = {"Sun"};
                Days[6] = {"Mon"};
                break;

            default:
                break;
            }
        }
    }

    void getCurrentDay()
    {
        CurrentDay--;
        cout << "Current Day: " << Days[CurrentDay] << endl;
    }

    void NextDay()
    {
        CurrentDay--;
        cout << "Next Day: " << Days[CurrentDay + 1] << endl;
    }

    void PrevDay()
    {
        CurrentDay--;
        cout << "Prev Day: " << Days[CurrentDay - 1] << endl;
    }

    void Nday(int N)
    {
        cout << N <<" Day: " << Days[N--] << endl;
    }

    void Display()
    {
        for (int i = 0; i < 7; i++)
        {
            cout << Days[i] << endl;
        }
        
    }
};

int main()
{
    WeekDays Week2(4);
    Week2.getCurrentDay();
    Week2.NextDay();
    Week2.PrevDay();
    Week2.Nday(3);
    Week2.Display();
}