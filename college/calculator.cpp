#include <iostream>
using namespace std;
int main()
{
    int a, b, d;
    char ch;
    cout << "Enter the value of a\n";
    cin >> a;
    cout << "Enter the value of b\n";
    cin >> b;
    cout << "Enter + for addition, - for substraction, * for multiplication, / for division \n";
    cin >> ch;

    switch (ch)
    {
    case '+':
        d = a + b;
        cout << "Addition of " << a << " and " << b << " is " << d << endl;
        break;
    case '-':
        d = a - b;
        cout << "Substraction of " << a << " and " << b << " is " << d << endl;
        break;
    case '*':
        d = a * b;
        cout << "Multiplication of " << a << " and " << b << " is " << d << endl;
        break;
    case '/':
        d = a / b;
        cout << "Division of " << a << " and " << b << " is " << d << endl;
        break;

    default:
        cout << "Please enter a valid input\n";
        break;
    }

    return 0;
}