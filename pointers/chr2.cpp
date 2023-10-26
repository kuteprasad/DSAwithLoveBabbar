#include <iostream>
using namespace std;
int main()
{
    char ch[] = "abcd";

    for (int i = 0; ch[i] != '\0'; i++)
    {
        cout << (*ch) + i << endl;
    }

    cout << 'X' + 1;
    return 0;
}