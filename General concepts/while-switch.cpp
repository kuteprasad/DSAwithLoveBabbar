#include <iostream>
using namespace std;
int main()
{

    int num = 2;

    switch (num)
    {
    case 1:
        cout << "I'm in switch case 1" << endl;
        break;
    case 2:
        cout << "I'm in switch case 2" << endl;
        break;
    default:
        break;
    }
    cout << "i'm at the end... " << endl;

    return 0;
}