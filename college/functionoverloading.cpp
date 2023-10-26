#include <iostream>
using namespace std;

class Addition
{

public:
    void sum(int a, int b)
    {
        cout << "Addition of two integers is " << a + b << endl;
        return;
    }
    void sum(int a, int b, int c)
    {
        cout << "Addition of three integers is " << a + b + c << endl;
        return;
    }
};

int main()
{
    int a, b, c;
    Addition obj;

    cout << "Enter the value of a:\n";
    cin >> a;
    cout << "Enter the value of b:\n";
    cin >> b;
    cout << "Enter the value of c:\n";
    cin >> c;
    cout << endl;

    obj.sum(a, b);
    obj.sum(a, b, c);

    return 0;
}