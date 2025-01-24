#include <iostream>
using namespace std;

int main()
{
    int Max, Min;

    cout << "enter your lower and upper limit, respectivly: " << endl;

    cin >> Min; cin >> Max;
    // assuming that user enters correct data.

    int Diff = Max - Min + 1;

    int Array[Diff];

    for (int i = 0; i < Diff; i++)
    {
        Array[i] = Min + i;
    }
    
    for (int i = 0; i < Diff; i++)
    {
        if (Array[i] % 2 == 0)
        {
            for (int j = 0; j < 5; j++)
            {
                if (i >= Diff)
                {
                    break;
                }
                else
                {
                    cout << Array[i] << " ";
                    
                    if (j < 4)
                    {
                        i += 2;
                    }
                }
            }
        }
        else if (Array[i] % 2 == 1)
        {
            if (i >= Max)
            {
                break;
            }
            cout << Array[i] << " ";
        }
    }
}