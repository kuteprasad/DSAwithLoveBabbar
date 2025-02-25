#include <iostream>
using namespace std;

void bubbleSort(int *arr, int n)
{
    bool swapped;
    for (int i = 0; i < n - 1; i++)
    {
        swapped = false;

        for (int j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (swapped == false)
        {
            break;
        }
    }
}
int main()
{
    int arr[5] = {1, 5, 3, 2, 7};

    bubbleSort(arr, 5);

    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}