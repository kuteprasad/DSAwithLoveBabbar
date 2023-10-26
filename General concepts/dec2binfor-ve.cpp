#include <iostream>
#include <math.h>
using namespace std;
int main()
{

    // i want to convert a negative decimal number to its binary number...

    int a, b = 0, i = 0, bit, ans;

    cout << "Enter the negative number" << endl;
    cin >> a;
    a = ~a + 1;
    // a = 15;
    while (true)
    {
        if (a & 1)
        {
            ans = pow(10, i);
            a = a >> 1;
            i++;

            break;
        }
        i++;
        a = a >> 1;
    }

    for (; i < 8; i++)
    {
        bit = a & 1;
        if (bit)
            bit = 0;
        else
            bit = 1;

        // cout<<bit<<endl;
        ans = (bit * pow(10, i) + ans);
        a = a >> 1;
    }

    // ans = ans % 100000000;

    cout << ans << endl;

    return 0;
}