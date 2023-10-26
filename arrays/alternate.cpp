#include <iostream>

using namespace std;

void swap(int arr[], int size)
{
    for (int i = 0; i < size; i += 2)
    {
        int temp;
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

int main()
{
    int arr[] = {2, 5, 4, 6, 2, 8, 9, 3, 5};
    int size = (sizeof(arr) / sizeof(int));
    int a;
    // cout << size << "     " << sizeof(arr) << "   " << sizeof(int) << endl;
    if (size % 2 == 1)
   {  a= size-1;
    swap(arr, a);
   }
    else
    swap(arr, size);
   
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}