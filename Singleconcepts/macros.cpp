#include <iostream>
using namespace std;

// defining the macros
#define min(a, b) ((a < b) ? a : b)

#define PI 3.142

#define Insta followers
#define followers 445

int main()
{

    int a = 23;

    int b = 33;

    cout << "Minimum of a and b is " << min(a, b) << endl;
    cout << "Area of circle with radius 3 is " << PI * 3 * 3 << endl;

    cout << "The number of followers i have on instagram is " << Insta << endl;

    return 0;
}