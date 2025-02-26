#include<iostream>
using namespace std;
class A{
    public:
    int x;

    A () {
        x = 1; 
        cout<<"constructor x:"<<x <<endl ;
    }
};

int main()
{   
    static A a;
    


return 0;
}