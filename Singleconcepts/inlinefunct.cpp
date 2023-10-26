#include <iostream>
using namespace std;
// it is inline function...

inline int returnMax(int a, int b)
{
    return (a > b) ? a : b;
}
int main()
{
    int a = 3, b = 5;

    int k = returnMax(a, b);
    cout << "Greater from a and b is :" << k;

    return 0;
}