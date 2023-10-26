#include <iostream>
using namespace std;
int main()
{
    int a = 1, b = 1, c = 0, i;

    for (i = 0; i < 5;)
    {
        cout << i << endl;
        a++;
        i++;
    }
    cout << i + 1 << " " << a << endl;
    return 0;
}