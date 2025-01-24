#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int Num;
    int Ans = 1;

    cout << "enter your number: ";
    cin >> Num;

    for (int i = 1; i <= Num; i++)
    {
        Ans *= i;
    }

    cout << "your answer: " << Ans;
    
}