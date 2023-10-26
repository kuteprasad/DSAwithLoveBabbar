#include <iostream>

using namespace std;

int main()
{
    int n;
    char ch = 'A';

    cout << "Enter number of rows";
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        ch = 'A' + n - i;
        for (int j = 0; j < i; j++)
        {
            cout << ch;
            ch++;
        }
        cout << endl;
    }

    return 0;
}