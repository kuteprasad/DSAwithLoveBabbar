#include <iostream>
using namespace std;
// see how the function get's called...
int funct(int a)
{
    cout << "the value of a is : " << a << "(IN Function)" << endl;
    return a + 4;
}
int main()
{
    cout << endl;
    int a = 3;
    funct(a);
    int b = funct(a);
    cout << "The value of b is : " << b << endl;

    cout << "The value returned by the function is : " << funct(a);

    return 0;
}