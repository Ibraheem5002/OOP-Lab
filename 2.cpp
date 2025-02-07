#include <iostream>
using namespace std;

class Circle
{
private:
    double Radius;
    double Area;
    double pi = 3.14159;
    double Diameter;
    double Circumfrence;

public:
    void Set_Radius()
    {
        float R;
        cout << "Enter your radius: ";
        cin >> R;

        Radius = R;
    }

    void Get_Radius()
    {
        cout << "radius: " << Radius << endl;
    }

    void Set_Area()
    {
        Area = pi * Radius * Radius;
    }

    void Get_Area()
    {
        cout << "Area: " << Area << endl;
    }

    void Set_Diameter()
    {
        Diameter = 2 * Radius;
    }

    void Get_Diameter()
    {
        cout << "Diameter: " << Diameter << endl;
    }

    void Set_Circumfrence()
    {
        Circumfrence = 2 * pi * Radius;
    }

    void Get_Circumfrence()
    {
        cout << "Circumfrence: " << Circumfrence << endl;
    }
};

int main()
{
    Circle C1;

    C1.Set_Radius(); C1.Set_Area(); C1.Set_Circumfrence(); C1.Set_Diameter();
    cout << endl;
    C1.Get_Radius(); C1.Get_Diameter(); C1.Get_Area(); C1.Get_Circumfrence();
}