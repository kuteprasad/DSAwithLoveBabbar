#include <iostream>

using namespace std;

int main()
{
    int i = 1, j, n;
    cin >> n;

    while (i <= n)
    {
        j = 1;
        while (j < i)
        {
            cout << " ";
            j++;
        }
        j = i;
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}