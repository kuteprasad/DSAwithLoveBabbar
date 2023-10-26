#include <iostream>
using namespace std;
int main()
{

    int row, col;
    cin >> row >> col;

    // int *ptr = new int;     syntax for allocating dynamic memory to variable
    // int *array = new int[5];    syntax for allocating dynamic memory to array.

    int **arr = new int *[row]; // syntax for allocating dynamic memory to 2D array.

    for (int i = 0; i < row; i++)
    {
        *(arr + i) = new int[col];
        // can also be written as:      arr[i] = new int[col];
    }

    for (int i = 0; i < row; i++) // initialising array
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < row; i++) // printing array
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    // deleting the columns of array..

    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    // deleting the array containing address of columns i.e. rows.
    delete[] arr;

    return 0;
}