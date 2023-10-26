#include <iostream>
using namespace std;

class Product
{
    int quantity, rate;
    float total, discount;

public:
    void getdata()
    {
        string name;
        cout << "Enter product name:\n";
        cin >> name;
        cout << "Enter quantity of product:\n";
        cin >> quantity;
        cout << "Enter rate of each product:\n";
        cin >> rate;
    }
    void calculate()
    {
        total = quantity * rate;
    }
    void Discount()
    {
        if (total > 5000)
        {
            discount = total * 0.1;
            cout << "The total amount you have to pay is " << total - discount << " Rupees\nand you have got " << discount << " rupees as discount\n";
        }
        else
        {
            cout << "You have got no discount\n";
        }
    }
};
int main()
{
    Product obj;
    obj.getdata();
    obj.calculate();
    obj.Discount();

    return 0;
}