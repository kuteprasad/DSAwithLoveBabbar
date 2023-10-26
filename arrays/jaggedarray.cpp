// clean and working code... 

#include <iostream>
using namespace std;
int main()
{
    int row;
    cout << "Enter the number of rows";
    cin >> row;

    int *col = new int[row]; // for storing no. of cols in particular row

    int **arr = new int *[row]; // for rows

    for (int i = 0; i < row; i++)
    {
        cout << "Enter the no. of columns of " << i + 1 << " th row" << endl;
        cin >> col[i];
        arr[i] = new int[col[i]]; // for cols
    }

    // for taking array elements as input

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col[i]; j++)
        {
            cout << "Enter element at row: " << i + 1 << " and at column: " << j + 1 << endl;
            cin >> arr[i][j];
        }
    }

    // for printing the jagged array

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col[i]; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // for freeing up the memory of cols

    for (int i = 0; i < row; i++)
    {
        delete[] arr[col[i]];
    }

    // for freeing up the memory of row

    delete[] arr;

    // for freeing up the memory of no. of cols

    delete[] col;

    return 0;
}