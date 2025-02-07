#include <iostream>
#include <string>
using namespace std;

class WaterBottle
{
private:
    string Company;
    string Color;
    float Capacity_mL;

public:
    float Capacity_L;

    void Set_Info(string Company1, string Color1, float Amount)
    {
        Company = Company1;
        Color = Color1;
        Capacity_mL = Amount;
        Capacity_L = Capacity_mL / 1000;
    }

    void Update()
    {
        float Amount;
        cout << "enter the amount, mili leters, of the water drank: ";
        cin >> Amount;

        Amount /= 1000;

        Capacity_L -= Amount;

        Capacity_mL = Capacity_L * 1000;

        cout << "remaining amount: " << Capacity_mL << "milileters";
    }
};

int main()
{
    WaterBottle Bottle1;

    Bottle1.Set_Info("Company", "Black", 5000.00);
    Bottle1.Update();
}