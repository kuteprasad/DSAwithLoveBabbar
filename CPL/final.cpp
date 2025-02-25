#include<iostream>

using namespace std; 
int main(int argc, char const *argv[])
{
    int n ;
    cin>>n;

    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }

    int count = 0; 

    int k = 0; 
    for(int i = 0; i < n-1; i++)
    {
        k = arr[i];
        int cnt = 1; 

        for(int j = i; j < n; j++)
        {
            if(arr[j] > k)
            {
                k=arr[j];
                cnt++;
            }
        }

        count = max(count, cnt);
    }

    cout<<count;

    return 0;

}