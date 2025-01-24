#include <iostream>
using namespace std;

int main()
{
    int Num;
    int Prime = 1;

    cout << "enter your number: ";
    cin >> Num;
    //assuming that the data entered is >= 2.

    if (Num == 2)
    {
        cout << "Prime: Yes";
    }
    else
    {
        for (int i = 2; i < Num; i++)
        {
            if (Num % i == 0)
            {
                Prime = 0;
            }
        }

        if (Prime == 1)
        {
            cout << "Prime: Yes";
        }
        else { cout << "Prime: No"; }
    }
}