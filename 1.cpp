#include <iostream>
using namespace std;

class DayOfYear
{
private:
    int Day;
    static string Month[12];
    int temp;

public:
    DayOfYear(int D)
    {
        Day = D;
    }

    void print()
    {
        if (Day >= 1 && Day <= 31)
        {
            temp = Day;
            cout << Month[0] << " " << temp;
        }
        else if (Day >= 32 && Day <= 59)
        {
            temp = Day - 32;
            cout << Month[1] << " " << temp;
        }
        else if (Day >= 60 && Day <= 90)
        {
            temp = Day - 59;
            cout << Month[2] << " " << temp;
        }
        else if (Day >= 91 && Day <= 120)
        {
            temp = Day - 90;
            cout << Month[3] << " " << temp;
        }
        else if (Day >= 121 && Day <= 151)
        {
            temp = Day - 120;
            cout << Month[4] << " " << temp;
        }
        else if (Day >= 152 && Day <= 181)
        {
            temp = Day - 151;
            cout << Month[5] << " " << temp;
        }
        else if (Day >= 182 && Day <= 212)
        {
            temp = Day - 181;
            cout << Month[6] << " " << temp;
        }
        else if (Day >= 213 && Day <= 243)
        {
            temp = Day - 212;
            cout << Month[7] << " " << temp;
        }
        else if (Day >= 244 && Day <= 273)
        {
            temp = Day - 243;
            cout << Month[8] << " " << temp;
        }
        else if (Day >= 274 && Day <= 304)
        {
            temp = Day - 273;
            cout << Month[9] << " " << temp;
        }
        else if (Day >= 305 && Day <= 334)
        {
            temp = Day - 304;
            cout << Month[10] << " " << temp;
        }
        else if (Day >= 335 && Day <= 365)
        {
            temp = Day - 334;
            cout << Month[11] << " " << temp;
        }
        else
        {
            cout << "invalid.";
        }
    }
};
string DayOfYear :: Month[12] = {"Jan","Feb","Mar","Apr","May","Jun","Jul","Aug","Sep","Oct","Nov","Dec"};

int main()
{
    DayOfYear D(100);
    D.print();
}