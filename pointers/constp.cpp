#include<iostream>
using namespace std;

int main()
{
    int a = 4;
    int b = 4;
    const int * p = & a; 
    cout<<*p<<endl;
    a = 6;
    cout<<*p<<endl;

   const int * const pt = &a;
    cout<<*p<<endl;
    a= 88;
    cout<<*p<<endl;

return 0;
}