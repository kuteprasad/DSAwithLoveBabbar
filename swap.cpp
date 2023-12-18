#include<iostream>
using namespace std;
void swap(int & a, int & b)
{
    int temp = a;
    a = b;
    b = temp;
}
int main()
{
    int a = 3, b = 4;
    int * funcpointer;
    funcpointer = &swap(a,b);
    funcpointer(a, b);
    cout<<a<<" "<<b<<endl;

return 0;
}