#include <iostream>
using namespace std;

float Calculation(int Units)
{
    float Bill = 0.0;

    if (Units <= 50)
    {
        Bill = Units * 0.5;
    }
    else if (Units > 50 && Units <= 100)
    {
        Bill = Units * 0.75;
    }
    else if (Units > 100 && Units <= 250)
    {
        Bill = Units * 1.2;
    }
    else
    {
        Bill = Units * 1.5;
    }
    
    return Bill;
}

int main()
{
    int Units;
    float Bill = 0.0;

    cout << "Enter your units: ";
    cin >> Units;

    Bill = Calculation(Units);

    cout << "Your Bill: " << Bill;
}