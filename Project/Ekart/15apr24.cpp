//Write a OOP to demonstrate e-cart where user can insert the item and its price, display the total the price and delete the item as well.

#include <iostream>
using namespace std;
int sum = 0;
class shopping
{
private:
    char item[25];
    int price;

public:
    void insert();
    void display();
    int total();
    void dlt();
};
void shopping ::insert()
{
    cout << "Enter Item name: ";
    cin >> item;
    cout << "Enter Item price: ";
    cin >> price;
}

void shopping ::display()
{
    if (price != 0)
    {
        cout << item << "\t" << price << endl;
    }
}

void shopping ::dlt()
{
    price = 0;
    cout << "Item deleted Successfully";
    sum = 0;
}

int shopping ::total()
{
    sum += price;
 return sum;
}
int main()
{
    int choice, i = 0, count = 0, del;
    do
    {
        cout << "\nEnter 0 to exit" << endl;
        cout << "Enter 1 to insert" << endl;
        cout << "Enter 2 to display" << endl;
        cout << "Enter 3 to delete" << endl;
        cout << "Enter 4 to get total" << endl;
        cin >> choice;
        shopping s1[100];
        switch (choice)
        {
        case 0:
            cout << "Program Executed Successfully :)" << endl;
            break;
        case 1:
            s1[i].insert();
            i++;
            count++;
            break;
        case 2:
 cout << "E-cart items are: " << endl;
            for (int j = 0; j < i; j++)
            {
                s1[j].display();
            }
            break;
        case 3:
            cout << "Enter Index to delete: ";
            cin >> del;
            s1[del].dlt();
            break;
        case 4:
            for (int j = 0; j < count; j++)
            {
                s1[j].total();
            }
            cout << "Total"
                 << "\t" << sum;
            sum = 0;
            break;
        default:
            cout << "Enter valid value!!" << endl;
        }
    } while (choice != 0);

    return 0;
}