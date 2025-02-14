#include <iostream>
#include <string>
#include <cstring>
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
        if (N < 1)
        {
            cout << "invalid input." << endl;
        }
        else if (N >= 1 && N <= 7)
        {
            CurrentDay = N;
            CurrentDay--;

            if (CurrentDay == 0)
            {
                int i = CurrentDay;

                Days[i] = "Mon";
                i++;
                Days[i] = "Tue";
                i++;
                Days[i] = "Wed";
                i++;
                Days[i] = "Thu";
                i++;
                Days[i] = "Fri";
                i++;
                Days[i] = "Sat";
                i++;
                Days[i] = "Sun";
            }
            else if (CurrentDay == 1)
            {
                int i = CurrentDay;

                Days[0] = "Sun";

                Days[i] = "Mon";
                i++;
                Days[i] = "Tue";
                i++;
                Days[i] = "Wed";
                i++;
                Days[i] = "Thu";
                i++;
                Days[i] = "Fri";
                i++;
                Days[i] = "Sat";
            }
            else if (CurrentDay == 2)
            {
                Days[0] = "Sat";
                Days[1] = "Sun";
                Days[2] = "Mon";
                Days[3] = "Tue";
                Days[4] = "Wed";
                Days[5] = "Thu";
                Days[6] = "Fri";
            }
            else if (CurrentDay == 3)
            {
                Days[0] = "Fri";
                Days[1] = "Sat";
                Days[2] = "Sun";
                Days[3] = "Mon";
                Days[4] = "Tue";
                Days[5] = "Wed";
                Days[6] = "Thu";
            }
            else if (CurrentDay == 4)
            {
                Days[0] = "Thu";
                Days[1] = "Fri";
                Days[2] = "Sat";
                Days[3] = "Sun";
                Days[4] = "Mon";
                Days[4] = "Tue";
                Days[6] = "Wed";
            }
            else if (CurrentDay == 5)
            {
                Days[0] = "Wed";
                Days[1] = "Thu";
                Days[2] = "Fri";
                Days[3] = "Sat";
                Days[4] = "Sun";
                Days[5] = "Mon";
                Days[6] = "Tue";
            }
            else if (CurrentDay == 6)
            {
                Days[0] = "Tue";
                Days[1] = "Wed";
                Days[2] = "Thu";
                Days[3] = "Fri";
                Days[4] = "Sat";
                Days[5] = "Sun";
                Days[6] = "Mon";
            }
            
        else
        {
            CurrentDay = N % 7;
            CurrentDay--;

            if (CurrentDay == 0)
            {
                int i = CurrentDay;

                Days[i] = "Mon";
                i++;
                Days[i] = "Tue";
                i++;
                Days[i] = "Wed";
                i++;
                Days[i] = "Thu";
                i++;
                Days[i] = "Fri";
                i++;
                Days[i] = "Sat";
                i++;
                Days[i] = "Sun";
            }
            else if (CurrentDay == 1)
            {
                int i = CurrentDay;

                Days[0] = "Sun";

                Days[i] = "Mon";
                i++;
                Days[i] = "Tue";
                i++;
                Days[i] = "Wed";
                i++;
                Days[i] = "Thu";
                i++;
                Days[i] = "Fri";
                i++;
                Days[i] = "Sat";
            }
            else if (CurrentDay == 2)
            {
                Days[0] = "Sat";
                Days[1] = "Sun";
                Days[2] = "Mon";
                Days[3] = "Tue";
                Days[4] = "Wed";
                Days[5] = "Thu";
                Days[6] = "Fri";
            }
            else if (CurrentDay == 3)
            {
                Days[0] = "Fri";
                Days[1] = "Sat";
                Days[2] = "Sun";
                Days[3] = "Mon";
                Days[4] = "Tue";
                Days[5] = "Wed";
                Days[6] = "Thu";
            }
            else if (CurrentDay == 4)
            {
                Days[0] = "Thu";
                Days[1] = "Fri";
                Days[2] = "Sat";
                Days[3] = "Sun";
                Days[4] = "Mon";
                Days[4] = "Tue";
                Days[6] = "Wed";
            }
            else if (CurrentDay == 5)
            {
                Days[0] = "Wed";
                Days[1] = "Thu";
                Days[2] = "Fri";
                Days[3] = "Sat";
                Days[4] = "Sun";
                Days[5] = "Mon";
                Days[6] = "Tue";
            }
            else if (CurrentDay == 6)
            {
                Days[0] = "Tue";
                Days[1] = "Wed";
                Days[2] = "Thu";
                Days[3] = "Fri";
                Days[4] = "Sat";
                Days[5] = "Sun";
                Days[6] = "Mon";
            }
        }
    }

    void getCurrentDay()
    {
        cout << "Current Day: " << Days[CurrentDay] << endl;
    }

    void getPreviousDay()
    {
        if (CurrentDay >= 1 && CurrentDay <= 6 )
        {
            cout << "Current Day: " << Days[CurrentDay-1] << endl;
        }
        else if (CurrentDay == 0)
        {
            cout << "Current Day: " << Days[6] << endl;
        }
    }

    void getNextDay()
    {
        if (CurrentDay >= 0 && CurrentDay <= 5 )
        {
            cout << "Current Day: " << Days[CurrentDay+1] << endl;
        }
        else if (CurrentDay == 6)
        {
            cout << "Current Day: " << Days[0] << endl;
        }
    }

    void getNDay(int N)
    {
        N--;
        cout << "Current Day: " << Days[N] << endl;
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
    WeekDays D(2);
    D.Display();
}