#include <iostream>
using namespace std;
int main()
{

    int arr[] = {3, 2, 10, 5};
    int ans = 0;
    int count = 0;
    int size = (sizeof(arr) / sizeof(int));

    for (int i = 0; i < size; i++)
    {
        count = count + arr[i];
        ans = ans ^ arr[i];
    }
    cout<<ans<<"  "<<count;
    if (count == ans)
        cout<<"unique";
    else
        cout<<"Not unique";

    return 0;
}