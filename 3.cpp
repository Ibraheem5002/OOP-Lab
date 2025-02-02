#include <iostream>
using namespace std;

int main()
{
    int rows;
    int col;

    cout << "enter your rows: ";
    cin >> rows;

    cout << "enter your col: ";
    cin >> col;

    int **Array = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            Array[i] = new int [col];
        }
    }
    
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << Array << "  ";
        }
        cout << endl;
    }
    
}