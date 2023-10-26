#include <iostream>
#include <vector>
using namespace std;

class Convert
{
public:
    void function(string a, int i, int s, string &ans)
    {
        if (i >= s)
        {
            return;
        }
        string map[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

        int index = a[i] - '0';

        ans = ans + map[index] + " ";
        function(a, i + 1, s, ans);
    }
};

int main()
{
    string a;
    string ans = "";

    cout << "Enter the value of A: " << endl;
    cin >> a;
    int s = a.size();

    Convert obj;

    obj.function(a, 0, s, ans);

    cout << "The Number in string is : " << ans << endl;

    return 0;
}