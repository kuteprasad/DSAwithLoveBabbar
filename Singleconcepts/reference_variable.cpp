#include <iostream>
using namespace std;

// all about pass by reference... 
void update(int &a)
{
    a = a + 10;
}
int main()
{
    int k = 33;

    int &b = k;

    cout << "before :" << k << " " << b << endl;

    update(k);
    update(b);

    cout << "after :" << k << " " << b << endl;

    return 0;
}