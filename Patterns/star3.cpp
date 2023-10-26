#include <iostream>
using namespace std;
int main()
{
    int i = 1;

    while (i < 5)
    {
        int space = 4 - i;
        while (space)
        {
            cout << " ";
            space = space - 1;
        }
        int j = 1;
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}