#include<iostream>
using namespace std;
int beta(int a)
{
    a++;
    cout<<a<<endl;
    return 2*a;
}

int main() {

int a=5;
cout<<beta(a)<<endl;
cout<<a;

return 0; }