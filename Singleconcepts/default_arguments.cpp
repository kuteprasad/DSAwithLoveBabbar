#include <iostream>
using namespace std;

// these are the default arguments:
// we can write default arguments from the righthand side... (remember);
void funct(int a, int b = 5, int c = 0)
{
    cout << endl
         << "the value of a is : " << a << endl;
    cout << "the value of b is : " << b << endl;
    cout << "the value of c is : " << c << endl
         << endl;
}
int main()
{
    int a = 3, b = 4, c = 1;

    funct(a, b);

    funct(a, b, c);

    return 0;
}