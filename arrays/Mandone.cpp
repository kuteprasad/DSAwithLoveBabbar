#include <iostream>
using namespace std;

int main()
{
    int arr[] = {2, 2, 5, 3, 5, 4, 3};
    int size = (sizeof(arr) / sizeof(int));
    int i, j, count;

    for (i = 0; i < size; i++)
    {
        count = 0;

        for (j = i; j < size; j++)
        {
            if (arr[i] == arr[j])
                count+=1;   
        }
        if (count == 1)
        {
            cout << "Unique element is " << arr[i];
            break;
        }
       cout<<endl;
        
    }

    return 0;
}