#include <iostream>
using namespace std;

int main()
{
    int size;
    int Odd = 0;
    int Even = 0;

    cout << "input size of your array: ";
    cin >> size;

    int Array[size];
    
    cout << "enter your array:" << endl;

    for (int i = 0; i < size; i++)
    {
        cin >> Array[i];

        if (Array[i] % 2 == 0)
        {
            Even++;
        }
        else { Odd++; }
    }

    cout << "Odd Count: " << Odd << endl;
    cout << "Even Count: " << Even << endl;
    
}