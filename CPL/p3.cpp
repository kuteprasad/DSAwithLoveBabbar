#include <iostream>
#include<vector>

using namespace std;
void findNext(vector<int> & ans, int x; int n)
{
    if(x > n)
    return ;

    ans.push_back(x);

    fintNext(ans, x*10, n);
    findNext(ans, x+1, n);
}
int main(int argc, char const *argv[])
{
    // cout<<"Hello world";

    int n;
    cin >> n;

    int k;
    cin >> k;

    vector<int> ans; 

    int count = 1;
    int j = 1;

    for (int i = 1; i <= 9; i++)
    {
        findNext(ans, i*10, n);
    }

    cout<<j;

    return 0;
}