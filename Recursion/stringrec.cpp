#include <iostream>
using namespace std;

void Recur(int n, string arr[])
{
    if (n == 0)
        return;
    int digit = n % 10;
    n = n / 10;

    Recur(n, arr);
    cout << arr[digit] << " ";

    return;
}

int main()
{
    int n;
    string arr[10] = {
        "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    cout << "Enter a number" << endl;
    cin >> n;

    Recur(n, arr);

    return 0;
}