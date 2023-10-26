#include <iostream>
using namespace std;

int main()
{
    const int k = 5;
    cout << k << endl;
    // k++;         this gives an error.. thus value of const can't be changed...
    cout << k << endl;

    return 0;
}