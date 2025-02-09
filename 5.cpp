#include <iostream>
#include <string>
using namespace std;

class Employee
{
private:
    string Name;
    double Salary;
    float Tax_Percentage;

public:
    void get_data()
    {
        cout << "Enter your Name: ";
        getline(cin, Name);

        cout << "Enter your Salary: ";
        cin >> Salary;
        cin.ignore();

        cout << "Enter your Tax Percentage: ";
        cin >> Tax_Percentage;
        cin.ignore();

        cout << endl;
    }

    void Salary_After_Tax()
    {
        float Taxes = 100 - Tax_Percentage;
        double New_Salary = Salary * (Taxes / 100);
        Salary = New_Salary;

        cout << "\nYour New Salary after taxes: " << Salary << endl;
    }

    void Update_Tax_Percentage()
    {
        cout << "\nEnter your new Tax rate: ";
        cin >> Tax_Percentage;

        float Taxes = 100 - Tax_Percentage;

        Salary = Salary * (Taxes / 100);

        cout << "\nYour New Salary after reapplying Taxes: " << Salary << endl;
    }
};

int main()
{
    Employee Employee1;

    Employee1.get_data();
    Employee1.Salary_After_Tax();
    Employee1.Update_Tax_Percentage();
}