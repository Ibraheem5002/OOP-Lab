#include <iostream>
using namespace std;

class LoanHelper
{
private:
    float Amount;
    float Intrest;
    int Months;
public:
    LoanHelper(float A, float I, int M)
    {
        Amount = A;
        Intrest = I;
        Months = M;
    }

    void LoanCalculate()
    {
        float SIntrest = (Amount*Intrest*Months) / 100;
        float Total = SIntrest + Amount;
        float PerMonth = Total / Months;

        cout << "You have to pay " << PerMonth << " for about " << Months << " months."; 
    }
};

int main()
{
    float amount, interest;
    int months;
    
    cout << "Enter loan amount: ";
    cin >> amount;
    cout << "Enter annual interest rate (%): ";
    cin >> interest;
    cout << "Enter loan duration in months: ";
    cin >> months;
    
    LoanHelper loan(amount, interest, months);
    loan.LoanCalculate();
}
