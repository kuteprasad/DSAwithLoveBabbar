#include <iostream>

using namespace std;

int main()
{
    int i = 1, j, n;
    cin >> n;

    while (i <= n)
    {
        j = i;
        while (j < n)
        {
            cout << " ";
            j++;
        }
        j = 1;
        while (j <= i)
        {
            cout << j;
            j++;
        }

        j=i;
        while (j>1)
        {
            cout<<j-1;
            j--;
        }
        
        cout<<endl;
        i++;
    }

    return 0;
}