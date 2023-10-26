#include <iostream>
using namespace std;

void insertionSort ( int * arr, int n)
{
for (int i = 0; i < n - 1; i++)
    {

        for (int j = i + 1; j > 0; j--)
        {

            if (arr[j] < arr[j - 1])
            {
                swap(arr[j], arr[j - 1]);
            }
        }
    }
  
}
int main()
{
    int n = 4;
    int arr[4] = {9, 4, 3, 8};
//  arr = &arr[0] .... 
    insertionSort( arr, n);
    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << endl;
    }

    return 0;
}

// int * ptr = &a;
