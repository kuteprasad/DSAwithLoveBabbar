#include <iostream>
#include<vector>
using namespace std;
char islower(char m)
{
    if (m >= 65 && m <= 90)
    {
        return m - 'A' + 'a';
    }
    return m;
}
bool checkPalindrome(string s)
{

    vector<char> k;
    int m = 0;
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        if ((ch >= 48 && ch <= 57) || (ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
        {
            k[m++] = ch;
        }
    }
    int start = 0;
    int end = k.size() - 1;
    cout << end << endl;
    while (start < end)
    {
        if (islower(k[start]) != islower(k[end]))
            return 0;
        else
        {
            start++;
            end--;
        }
    }
    return 1;
}

int main()
{
    string s = "Hello";
    
    cout << "it is palindrom : " << checkPalindrome(s);
    return 0;
}