#include <iostream>
using namespace std;

class Queue
{
private:
    int *arr;
    int *front;
    int *rear;
    int *next;

    int n, k, freespot;

public:
    Queue(int N, int K)
    {
        n = N;
        k = K;

        arr = new int[n];
        next = new int[n];
        front = new int[k];
        rear = new int[k];

        for (int i = 0; i < n; i++)
        {
            if (i < k)
                front[i] = rear[i] = -1;

            next[i] = i + 1;
        }
        next[n - 1] = -1;

        freespot = 0;
    }

    void push(int x, int m)
    {
        int i = freespot;

        freespot = next[i];

        arr[i] = x;

        if (isEmpty(m))
        {
            front[m - 1] = i;
        }
        else
        {
            next[rear[m - 1]] = i;
        }

        rear[m - 1] = i;

        next[i] = -1;
    }

    void pop(int m)
    {
        if (isEmpty(m))
        {
            cout << "Queue is Empty!" << endl;
            return;
        }

        int i = front[m - 1];

        front[m - 1] = next[i];

        next[i] = freespot;

        freespot = i;
    }

    int peek(int m)
    {
        if (isEmpty(m))
            return -1;

        return arr[front[m - 1]];
    }

    int size(int m)
    {
        if (isEmpty(m))
            return 0;

        int j = front[m - 1];
        int count = 0;

        while (j != -1)
        {
            j = next[j];
            count++;
        }
        return count;
    }

    bool isEmpty(int m)
    {
        if (front[m - 1] == -1)
            return true;
        return false;
    }

    bool isFull()
    {
        if (freespot == -1)
            return true;
        return false;
    }
};

int main()
{
    Queue obj = Queue(10, 3);

    cout << obj.isEmpty(1) << endl;
    cout << obj.isFull() << endl;
    cout << obj.peek(2) << "\n Push operations :" << endl;

    obj.push(34, 1);
    obj.push(3, 1);
    obj.push(4, 2);
    // obj.push(14, 3);
    obj.push(22, 1);

    cout << "peek operations: " << endl;

    cout << obj.peek(1) << endl;
    cout << obj.peek(2) << endl;
    cout << obj.peek(3) << endl;

    cout << "size of 1: " << obj.size(3) << endl;

    return 0;
}