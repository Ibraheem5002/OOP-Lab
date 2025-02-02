#include <iostream>
using namespace std;

void Addition (float *ptr_Num1, float *ptr_Num2)
{
    cout << endl << "Answer: " << *(ptr_Num1) + *(ptr_Num2) << endl << endl;
}

void Subtraction (float *ptr_Num1, float *ptr_Num2)
{
    cout << endl << "Answer: " << *(ptr_Num1) - *(ptr_Num2) << endl << endl;
}

void Multiplication (float *ptr_Num1, float *ptr_Num2)
{
    cout << endl << "Answer: " << *(ptr_Num1) * *(ptr_Num2) << endl << endl;
}

void Division (float *ptr_Num1, float *ptr_Num2)
{
    if (*(ptr_Num2) == 0)
    {
        cout << "Answer: Math Error" << endl << endl;
    }
    else
    {
        float Answer = *(ptr_Num1) / *(ptr_Num2);
        cout << "Answer: " << Answer << endl << endl;
    }
}

int main()
{
    float Num1, Num2;
    int Option;

    while (1)
    {
        cout << "Select your operation [1 for +, 2 for -, 3 for *, 4 for /, 0 for exit]: ";
        cin >> Option;

        if (Option == 0)
        {
            cout << endl << "Thankyou for using our survices.";
            return 0;
        }
        
        cout << "Input your Num 1: ";
        cin >> Num1;
        cout << "Input your Num 2: ";
        cin >> Num2;

        float *ptr_Num1 = &Num1;
        float *ptr_Num2 = &Num2;

        switch (Option)
        {
        case 1:
            Addition(ptr_Num1, ptr_Num2);
            break;
        
        case 2:
            Subtraction(ptr_Num1, ptr_Num2);
            break;

        case 3:
            Multiplication(ptr_Num1, ptr_Num2);
            break;

        case 4:
            Division(ptr_Num1, ptr_Num2);
            break;

        default:
            break;
        }
    }
}