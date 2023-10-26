#include <iostream>
using namespace std;
int main()
{
    int16_t letter = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << letter << " ";
            letter++;
        }
        cout << endl;
    }

    return 0;
}