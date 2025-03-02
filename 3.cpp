#include <iostream>
#include <vector>
using namespace std;

class Menu
{
private:
    vector <string> Food_Name;
    vector <float> Food_Price;
    float Bill;
    int Bill_Paid;
public:
    Menu()
    {
        Bill = 0;
        Bill_Paid = 0;
    }

    void setFood()
    {
        cout << "Enter the food names and prices when prompt.[-1 for Name to exit]" << endl;
        string N;
        float P;

        while (1)
        {
            cout << "Enter Food Name: ";
            getline(cin,N);

            if (N == "-1")
            {
                break;
            }
            
            Food_Name.push_back(N);

            cout << "Enter respected Price: ";
            cin >> P;
            cin.ignore();

            Food_Price.push_back(P);
        }
    }

    void getFood()
    {
        int count = Food_Name.size();

        for (int i = 0; i < count; i++)
        {
            cout << "Element Num: " << i << " " << Food_Name[i] << " $" << Food_Price[i] << endl;
        }
    }

    void TakingOrder()
    {
        int N;

        while (1)
        {        
            cout << "Enter the element number of your item [-1 to exit]: ";
            cin >> N;
            cin.ignore();

            if (N == -1)
            {
                cout << "Your Total Bill: $" << Bill << endl;
                break;
            }
            else
            {
                Bill += Food_Price[N];
            }
        }
    }

    void CustomerPay()
    {
        Bill_Paid = 1;
        cout << "Bill paid successfully" << endl;
    }

    void CustomerLeave()
    {
        if (Bill_Paid == 0)
        {
            int N;

            cout << "Sorry, you first have to pay your dues." << endl;
            while (1)
            {
                cout << "Do you wish to pay [1 for Yes, 0 for No]: ";
                cin >> N;

                if (N == 1)
                {
                    CustomerPay();
                    cout << "Thankyou for dining with us." << endl;
                    break;
                }
                else
                {
                    cout << "Sorry, you cannot leave unless you pay" << endl;
                }
            }
        }
    }
};

int main()
{
    Menu restaurantMenu;
    
    restaurantMenu.setFood();
    
    cout << "\nMenu Items:\n";
    restaurantMenu.getFood();
    
    cout << "\nPlacing an order:\n";
    restaurantMenu.TakingOrder();
    
    cout << "\nCustomer attempting to leave:\n";
    restaurantMenu.CustomerLeave();
}
