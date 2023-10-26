#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int k = 9 - i; k >= 5; k--)
        {
            cout << k;
        }
        cout << endl;
    }
    return 0;
}