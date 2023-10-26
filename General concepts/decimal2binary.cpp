#include<iostream>
#include<math.h>

using namespace std;
int main() {
// i want to convert decimal to binary and store that binary value as an integer and print ...
int a, i=0, ans=0;
cout<<"Enter the number"<<endl;
cin>>a;

while (a!=0)
{
    if (a&1)
    {
        ans = (pow(10, i) + ans);
    }
    i++;
    a=a>>1;
}

cout<<ans;



return 0; }