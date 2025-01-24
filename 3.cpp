#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    char Operation[1];

    cout << "enter your operation [+, -, *, /]";

    cin >> Operation[0];
    //assumming data entered is correct.

    int Num1, Num2, Ans;

    cout << "enter your num 1: ";
    cin >> Num1;

    cout << "enter your num 2: ";
    cin >> Num2;
    
    switch (Operation[0])
    {
    case '+':
        Ans = Num1 - - Num2;
        break;
    
    case '*':
        Ans = Num1 * Num2;
        break;
    
    case '-':
        Ans = Num1 - Num2;

    default:
        Ans = Num1 / Num2;
        break;
    }

    cout << "Your answer: " << Ans;
}