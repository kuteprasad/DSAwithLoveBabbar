#include<iostream>

using namespace std; 
int main(int argc, char const *argv[])
{
int n; 
cin>> n; 

int arr[n];

for(int i = 0; i < n; i++)
{
    cin>>arr[i];
}

int m[n] ;

for (int i = 0; i < n; i++)
{
    m[i] = -1; 
}

for(int j = n - 2; j >= 0 ; j--)
{
    if(arr[j] < arr[j+1])
    {
        m[j] = arr[j+1];
        continue;
    }

    if(arr[j] < m[j+1])
    {
        m[j] = m[j+1];
        continue;
    }
}

for (int i = 0; i < n; i++)
{
    cout<<m[i]<< " ";
}

    return 0;
}