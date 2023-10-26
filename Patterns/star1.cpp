#include <iostream>

using namespace std;

int main()
{
    int n, i = 1, j = 1;
    cout << "Enter n \n";
    cin >> n;

    while (i < n)
    {

        j = 1;
        while (j < i)
        {
            cout << "  ";
            j++;
        }

        j = n - i ;
        while (j > 0)
        {
            cout << "* ";
            j--;
        }

        cout << endl;
        i++;
    }

    return 0;
}