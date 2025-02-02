#include <iostream>
using namespace std;

struct Shop
{
    int ID;
    string Name;
    float Price;
};

void Display(Shop& Item)
{
    cout << "ID: " << Item.ID;
    cout << ". Name: " << Item.Name;
    cout << ". Price: " << Item.Price << "." << endl;
}

void Update(Shop &Item)
{
    int Num;

    cout << "what do you wanna change [1 for Name, 2 for Price, 0 for exit]: ";
    cin >> Num;

    if (Num == 1)
    {
        string New_Name;
        cout << "enter your new name: ";
        cin >> New_Name;

        Item.Name = New_Name;
    }
    else if (Num == 2)
    {
        float New_Price;
        cout << "enter your new price: ";
        cin >> New_Price;

        Item.Price = New_Price;
    }
    else
    {
        return;
    }
    
}

void Delete(Shop &Item1, Shop &Item2)
{
    Item1.ID = Item2.ID;
    Item1.Name = Item2.Name;
    Item1.Price = Item2.Price;
}

int main()
{
    int Num;
    int ID;
    int ID_found;

    cout << "how many number of products: ";
    cin >> Num;

    Shop Item[Num];

    for (int i = 0; i < Num; i++)
    {
        Item[i].ID = i+1;
        Item[i].Name = "0";
        Item[i].Price = 0.0;
    }
    
    cout << "enter your product id: ";
    cin >> ID;

    for (int i = 0; i < Num; i++)
    {
        if (ID == Item[i].ID)
        {
            ID_found = i;
            break;
        }
    }
    
    Display(Item[ID_found]);
    cout << endl;
    Update(Item[ID_found]);
    cout << endl;
    Display(Item[ID_found]);
    cout << endl;
    Delete(Item[ID_found], Item[ID_found + 1]);
}