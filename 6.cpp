#include <iostream>
using namespace std;

class Device
{
public:
    string Brand;
    string Model;

    Device(string B, string M) : Brand(B), Model(M) {}

    void DisplayDevice()
    {
        cout << "Brand: " << Brand << endl;
        cout << "Model: " << Model << endl;
    }
};

class Smartphone : virtual public Device
{
public:
    int SimSlots;

    Smartphone(string B, string M, int S) : Device(B, M), SimSlots(S) {}

    void DisplaySmartphone()
    {
        DisplayDevice();
        cout << "SIM Slots: " << SimSlots << endl;
    }
};

class Tablet : virtual public Device
{
public:
    bool StylusSupport;

    Tablet(string B, string M, bool SS) : Device(B, M), StylusSupport(SS) {}

    void DisplayTablet()
    {
        DisplayDevice();
        cout << "Stylus Support: " << (StylusSupport ? "Yes" : "No") << endl;
    }
};

class HybridDevice : public Smartphone, public Tablet
{
public:
    HybridDevice(string B, string M, int S, bool SS)
        : Device(B, M), Smartphone(B, M, S), Tablet(B, M, SS) {}

    void DisplayHybrid()
    {
        cout << "Hybrid Device Features:\n";
        DisplayDevice();
        cout << "SIM Slots: " << SimSlots << endl;
        cout << "Stylus Support: " << (StylusSupport ? "Yes" : "No") << endl;
    }
};

int main()
{
    HybridDevice H("TechCorp", "Gizmo X", 2, true);

    cout << "Displaying Hybrid Device Details:\n";
    H.DisplayHybrid();

    return 0;
}
