#include <iostream>
using namespace std;
int main()
{

    int a, k;
    cout << "Enter number" << endl;
    cin >> a;

    switch (1)
    {
    case 1:
        k = a / 100;
        cout << k << " notes of 100" << endl;
        a = a - (k * 100);

    case 2:
        k = a / 50;
        cout << k << " notes of 50" << endl;
        a = a - (k * 50);

    case 3:
        k = a / 20;
        cout << k << " notes of 20" << endl;
        a = a - (k * 20);

    case 4:
        k = a / 1;
        cout << k << " notes of 1" << endl;
        a = a - (k * 1);
    }

    return 0;
}