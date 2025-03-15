#include <iostream>
using namespace std;

class Vehicle {
public:
    string Make;
    string Model;
    int Year;

    Vehicle(string Ma, string Mo, int Y)
    {
        Make = Ma;
        Model = Mo;
        Year = Y;
    }

    void DisplayVehicle()
    {
        cout << "Make: " << Make << endl;
        cout << "Model: " << Model << endl;
        cout << "Year: " << Year << endl;
    }
};

class Car : public Vehicle {
public:
    int Doors;
    double FuelEfficiency;

    Car(string Ma, string Mo, int Y, int D, double FE)
    : Vehicle(Ma, Mo, Y)
    {
        Doors = D;
        FuelEfficiency = FE;
    }


    void DisplayCar()
    {
        DisplayVehicle();
        cout << "Doors: " << Doors << endl;
        cout << "Fuel Efficiency: " << FuelEfficiency  << endl;
    }
};

class ElectricCar : public Car {
public:
    int BatteryLife;

    ElectricCar(string Ma, string Mo, int Y, int D, double FE, int BL)
    : Car(Ma, Mo, Y, D, FE)
    {
        BatteryLife = BL;
    }

    void DisplayElectricCar()
    {
        DisplayCar();
        cout << "Battery Life: " << BatteryLife << endl;
    }
};

int main()
{
    ElectricCar EC("Tesla", "Model 3", 2024, 4, 0, 300);

    cout << "Electric Car Details:" << endl;
    EC.DisplayElectricCar();

    return 0;
}
