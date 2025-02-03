#include <iostream>
#include <cmath>
using namespace std;

int **Create_Matrix(int rows, int col)
{
    int **Matrix = new int *[rows];

    for (int i = 0; i < rows; i++)
    {
        Matrix[i] = new int [col];
    }

    cout << "Input your Matrix elements: " << endl;
    for (int i = 0; i < rows; i++)
    {
        cout << "Row " << i+1 << ":" << endl;
        for (int j = 0; j < col; j++)
        {
            cin >> Matrix[i][j];
        }
    }
    cout << endl;

    return Matrix;
}

void Addition(int **Matrix1, int **Matrix2, int rows1, int col1, int rows2, int col2)
{
    if (rows1 != rows2 || col1 != col2)
    {
        cout << "Addition not possible" << endl << endl;
        return;   
    }
    else
    {
        cout << "Answer: " << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                cout << " " << Matrix1[i][j] + Matrix2[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void Subtraction(int **Matrix1, int **Matrix2, int rows1, int col1, int rows2, int col2)
{
    if (rows1 != rows2 || col1 != col2)
    {
        cout << "Subtraction not possible" << endl << endl;
        return;   
    }
    else
    {
        cout << "Answer: " << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < col1; j++)
            {
                cout << " " << Matrix1[i][j] - Matrix2[i][j] << " ";
            }
            cout << endl;
        }
    }
}

void Multiplication(int **Matrix1, int **Matrix2, int rows1, int col1, int rows2, int col2)
{
    if (rows1 != col2 || rows2 != col1)
    {
        cout << "Multiplication not possible" << endl << endl;
    }
    else
    {
        int Answer[rows1][col2] = {0};

        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                for (int k = 0; k < col1; k++)
                {
                    Answer[i][j] += Matrix1[i][k] * Matrix2[k][j];
                }
            }
        }

        cout << "Answer:" << endl;
        for (int i = 0; i < rows1; i++)
        {
            for (int j = 0; j < col2; j++)
            {
                cout << " " << Answer[i][j] << " ";
            }
            cout << endl;
        }
    }
}

int main()
{
    int rows1, col1, rows2, col2;
    int Option;

    cout << "Input your Row size of your Matrix 1: ";
    cin >> rows1;
    cout << "Input your Column size of your Matrix 1: ";
    cin >> col1;

    int **Matrix1 = Create_Matrix(rows1, col1);
    
    cout << "Input your Row size of your Matrix 2: ";
    cin >> rows2;
    cout << "Input your Column size of your Matrix 2: ";
    cin >> col2;
    
    int **Matrix2 = Create_Matrix(rows2, col2);

    while (1)
    {
        cout << "Choose your operation [1 for +, 2 for -, 3 for *, 0 for Exit]: " << endl;
        cin >> Option;

        if (Option == 0)
        {
            cout << "Thankyou for using our services";
            break;;
        }
        

        switch (Option)
        {
        case 1:
            Addition(Matrix1, Matrix2, rows1, col1, rows2, col2);
            break;
        
        case 2:
            Subtraction(Matrix1, Matrix2, rows1, col1, rows2, col2);
            break;

        case 3:
            Multiplication(Matrix1, Matrix2, rows1, col1, rows2, col2);
            break;

        default:
            break;
        }
    }
    
}