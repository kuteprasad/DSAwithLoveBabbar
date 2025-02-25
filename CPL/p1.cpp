#include<iostream>

using namespace std; 
int main(int argc, char const *argv[])
{
    /* code */
    int n ;
    cin>>n; 

    string a; 
    string b; 

    cin>> a;
    cin>> b; 

    bool status = true; 

    for(int i = 0; i < n; i++)
    {
        if(a[i] == b[i])
        {
            continue; 
        }

        if((a[i] == 'B' && b[i] == 'G') || (a[i] == 'G' && b[i] == 'B')) continue;

        else
        {
        status = false; 
        break;

        }

        
    }

    if(status)
    {
        cout<<"YES";
    }else{
        cout<<"NO";
    }

    return 0;
}
