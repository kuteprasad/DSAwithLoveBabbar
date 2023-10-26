#include <iostream>
using namespace std;

void swap(int f, int g)
{
    int temp = g;
    g = f;
    f = g;
}

void reverseArray(int arr[], int m)
{
    int k = 5;
    for (int i = 0; i < k; i++)
    {
        if (i > m && i < (((k - m) / 2) + m))
        {
            swap(arr[i], arr[k - (i - m)]);
        }
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int m = 1;
    reverseArray(arr, m);
    for (int i = 0; i < 5; i++)
    {
        cout << *(arr + i);
    }
    return 0;
}
