#include <iostream>
#include <string.h>
using namespace std;

struct database
{
    string chocolate_name;
    int quantity;
    float price;
};

int main()
{
    int n;
    string choco_name;
    int a;

    cout << "Enter the size of inventory\n";
    cin >> n;
    struct database s[n];
    while (true)
    {
        cout << "\nEnter the number of task you want to do:\n 1 for adding records\n 2 for displaying records\n 3 for searching a record \n 4 for deleting a record \n 5 for updating a record \n 6 for sorting a record \n 7 to get out of code\n\n";
        cin >> a;
        switch (a)
        {
        case 1:
            // add records
            for (int i = 0; i < n; i++)
            {
                cout << "Enter the name of Chocolate " << i + 1 << " \n";
                cin >> s[i].chocolate_name;
                cout << "Enter the quantity of chocolates " << i + 1 << " \n";
                cin >> s[i].quantity;
                cout << "Enter the price per chocolate " << i + 1 << " \n";
                cin >> s[i].price;
            }
            break;

        case 2:
            // display records
            for (int i = 0; i < n; i++)
            {
                cout << "\nThe name of Chocolate " << i + 1 << " is :";
                cout << s[i].chocolate_name;
                cout << "\nThe quantity of chocolate " << i + 1 << " is :";
                cout << s[i].quantity;
                cout << "\nThe price per chocolate  " << i + 1 << " is :";
                cout << s[i].price <<endl;
            }
            break;

        case 3:
            // search a record
            cout << "Enter the name of chocolate you want to search\n";
            cin >> choco_name;

            for (int i = 0; i < n; i++)
            {
                if (s[i].chocolate_name == choco_name)
                {
                    cout << "The chocolate is at " << i + 1 << " th position\n";
                }
            }

            break;

        case 4:
            // delete a record
            cout << "Enter the name of chocolate record you want to delete\n";
            cin >> choco_name;

            for (int i = 0; i < n; i++)
            {
                if (s[i].chocolate_name == choco_name)
                {
                    for (int j = i; j < n - 1; j++)
                    {
                        s[j].chocolate_name = s[j + 1].chocolate_name;
                        s[j].price = s[j + 1].price;
                        s[j].quantity = s[j + 1].quantity;
                    }
                    n = n - 1;
                }
            }

            break;
        case 5:
            // update a record
            cout << "Enter the name of chocolate record you want to update\n";
            cin >> choco_name;

            for (int i = 0; i < n; i++)
            {
                if (s[i].chocolate_name == choco_name)
                {
                    cout << "Enter name of Chocolate\n";
                    cin >> s[i].chocolate_name;
                    cout << "Enter the quantity of chocolates\n";
                    cin >> s[i].quantity;
                    cout << "Enter the price per chocolate\n";
                    cin >> s[i].price;
                }
            }

            break;
        case 6:
            // sort using bubble sort
            for (int i = n; i > 0; i--)
            {
                for (int j = i; j > 0; j--)
                {
                    if (s[j - 1].quantity > s[i].quantity)
                    {
                        swap(s[j - 1].quantity, s[i].quantity);
                    }
                }
            }
            break;
        case 7:
        if(true)
        {
            break;
        }
            break;

        default:
            cout << "Enter a valid input:\n";
            break;
        }
    }

    return 0;
}