#include <iostream>
using namespace std;

int main()
{
    int Size = 5;
    int *Array = new int[Size];
    int Count = 0;
    int Exit = 0;
    
    cout << "When prompt, enter your numbers. Enter '-69' to stop." << endl << endl;
    while (1)
    {
        if (Exit == 1)
        {
            break;
        }

        if (Count == Size)
        {
            int New_Size = Size * 2;
            int *New_Array = new int[New_Size];

            for (int i = 0; i < Size; i++)
            {
                New_Array[i] = Array[i];
            }
            
            delete[] Array;
            Array = New_Array;
            Size = New_Size;

            cout << endl << "Array Resized to: " << Size << endl << endl;
        }

        cout << "Enter your numbers: " << endl;
        for (int i = Count; i < Size; i++)
        {
            cin >> Array[i];
            Count++;

            if (Array[i] == -69)
            {
                Exit = 1;
                break;
            }
        }
    }
    
    delete[] Array;
}