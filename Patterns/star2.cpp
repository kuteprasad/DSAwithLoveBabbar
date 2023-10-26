#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, j = 1;
    cout << "Enter n \n";
    cin >> n;

    while (i <= n)
    {
        j = 0;
        while (j < n - i)
        {
            cout << "  ";
            j++;
        }

        j = i;
        while (j > 0)
        {
            cout << i << " ";
            j--;
        }

        cout << endl;
        i++;
    }

    return 0;
}