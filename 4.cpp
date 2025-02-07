#include <iostream>
using namespace std;

class StationaryShop
{
private:
    string Items[100];
    double Items_Price[100];
    int Bought[100]; // will contain the element number of the item bought
    int Quantity[100];

public:
    void Initializing()
    {
        for (int i = 0; i < 100; i++)
        {
            Items[i] = "0";
            Items_Price[i] = 0;
            Bought[i] = -1;
            Quantity[i] = -1;
        }
    }

    void Add()
    {
        string Name;
        double Price;
        int N;

        for (int i = 0; i < 100; i++)
        {
            if (Items[i] == "0" && Items_Price[i] == 0)
            {
                N = i;
                break;
            }
        }

        cout << "\nWhen prompted, enter your item(s) details.\n";
        cout << "Note: Max number of items to be added = 100.\n";
        cout << "Enter Name '-1' to exit.\n\n";

        for (int i = N; i < 100; i++)
        {
            cout << "Name of the item: ";
            getline(cin, Items[i]);

            if (Items[i] == "-1")
            {
                Items[i] = "0";
                break;
            }

            cout << "Price of item: ";
            cin >> Items_Price[i];
            cin.ignore();

            cout << endl;
        }
    }

    void List()
    {
        int N = -1;

        for (int i = 0; i < 100; i++)
        {
            if (Items[i] == "0" && Items_Price[i] == 0)
            {
                N = i;
                break;
            }
        }

        cout << "\nItem List:\n";

        if (N == -1)
        {
            cout << "No items have been added yet.\n";
        }
        else
        {
            for (int i = 0; i < N; i++)
            {
                cout << "Element Num: " << i << ". " << Items[i] << ". Price: " << Items_Price[i] << endl;
            }
        }

        cout << endl;
    }

    void Edit()
    {
        int Option, N;

        cout << "\nEnter the element number of the item you wish to edit: ";
        cin >> N;

        cout << "Element Num: " << N << ". " << Items[N] << ". Price: " << Items_Price[N] << endl;

        cout << "What do you wish to change? [1 for Item Name, 2 for Price, 0 for Exit]: ";
        cin >> Option;
        cin.ignore();

        if (Option == 1)
        {
            cout << "Enter new Name: ";
            getline(cin, Items[N]);
        }
        else if (Option == 2)
        {
            cout << "Enter new Price: ";
            cin >> Items_Price[N];
        }

        cout << endl;
    }

    void Perchasing()
    {
        for (int i = 0; i < 100; i++)
        {
            Bought[i] = -1;
            Quantity[i] = -1;
        }

        int N, Q;

        cout << "\nEnter the element number of the item to purchase. Enter '-1' to exit.\n\n";

        for (int i = 0; i < 100; i++)
        {
            cout << "Enter element number: ";
            cin >> N;

            if (N == -1)
            {
                break;
            }

            cout << "Enter quantity: ";
            cin >> Q;

            Bought[i] = N;
            Quantity[i] = Q;

            cout << endl;
        }

        cout << endl;
    }

    void Receipt()
    {
        double Amount = 0, Amount_1;
        int N = 0;

        for (int i = 0; i < 100; i++)
        {
            if (Bought[i] == -1 && Quantity[i] == -1)
            {
                N = i;
                break;
            }
        }

        cout << "\nYour Receipt:\n";
        cout << "-------------------------------------------------------------\n";
        cout << "Sr.N | Item Name       | Quantity | Price of 1 Item | Total Price\n";
        cout << "-------------------------------------------------------------\n";

        for (int i = 0; i < N; i++)
        {
            Amount_1 = Quantity[i] * Items_Price[Bought[i]];
            Amount += Amount_1;

            cout << i + 1 << "    | " << Items[Bought[i]] << "     | " << Quantity[i] 
                 << "       | " << Items_Price[Bought[i]] << "        | " << Amount_1 << endl;
        }

        cout << "-------------------------------------------------------------\n";
        cout << "Total Amount: " << Amount << "\n";
        cout << "-------------------------------------------------------------\n";
    }
};

int main()
{
    StationaryShop Shop;

    Shop.Initializing();
    Shop.Add();
    Shop.List();
    Shop.Edit();
    Shop.List();
    Shop.Perchasing();
    Shop.Receipt();

    return 0;
}
