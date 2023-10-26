#include <iostream>
using namespace std;

bool isalpanum(string& s, int n)
{
    if(s[n] >= 'A' && s[n] <= 'Z')
    {
        s[n] = s[n] - 'A' + 'a';
    }

    if((s[n] >= 'a' && s[n] <= 'z') || (s[n] >= '0' && s[n] <= '9'))
    {
        return true;
    }
    
   return false;
}
bool isequal(string& s, int i, int j)

{   if (i > j)
{
    return true;
}

    while(true)
    {
        if(isalpanum(s, i)){
            break;
        }
        else{
            i++;
        }
    }

    while(true)
    {
        if(isalpanum(s, j)){
            break;
        }
        else{
            j--;
        }
    }

    if(s[i] == s[j])
    {
       return isequal(s , i , j);
    }
    else
    {
        return false;
    }
}
bool checkPalindrome(string& s)
{
   int i = 0 ;
   int j = s.length() - 1;

   return isequal(s, i, j);
}

int main()
{
    string s = "aabbaa";
    cout<<endl<<checkPalindrome(s)<<endl;
    return 0;
}