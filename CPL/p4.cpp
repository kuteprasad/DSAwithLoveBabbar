#include<iostream>

using namespace std; 
int main(int argc, char const *argv[])
{
    int n; 
    cin>>n;

    int arr[n];

    for(int i = 0; i < n ; i++)
    {
        cin>>arr[i] ;
    }


    int k = 0; 

    for(int i = 0; i< n; i++)
    {
        if(i == 0 )
        {
            if(arr[i+1] < arr[i])
            {
                k = 0; 
            }

        } else if(i==n-1)
        {
            if(arr[i-1] < arr[i])
            {
                // ans = max(arr[k], arr[i]);
                k = i; 
            }

        }
        else
        {
            if(arr[i-1] < arr[i] && arr[i+1] < arr[i])
            // ans = max(ans, arr[i]);
            {
            k = i; 

            }
        }
    }

    cout<<k;
    return 0;

}