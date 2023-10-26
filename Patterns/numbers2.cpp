#include <iostream>

using namespace std;

int main()
{
    int i = 1, j, n;
    cin >> n;

    while (i <= n)
    {
        j = n;
        while (j > i)
        {
            cout << " ";
            j--;
        }
        j = i-1;
        while (j < i)
        {
            cout << j+i;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}