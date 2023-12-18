#include <iostream>
#include <stack>
using namespace std;
class Node
{
private:
    int data;

public:
    Node *next;
    Node *prev;

    Node(int data)
    {
        this->data = data;
        next = nullptr;
        prev = nullptr;
    }
    int getData()
    {
        return data;
    }
};

class Stack
{
private:
    int top;
    Node *head ;
    Node *tail ;

public:
    Stack()
    {
        head = new Node(-1);
        tail = head;
    }

    void push(int data)
    {
        Node *newnode = new Node(data);
        tail->next = newnode;
        newnode->prev = tail;
        tail = newnode;
        top++;
    }

    void pop()
    {
        if (tail != head)
        {
            Node *remove = tail;
            tail = tail->prev;
            remove->prev = nullptr;
            tail->next = nullptr;
            top--;
        }
        else
        {
            cout << "Stack is Empty" << endl;
        }
    }

    int peek()
    {
        if (tail != head)
        {
            return tail->getData();
        }
        return -1;
    }

    int size()
    {
        return top;
    }
    int isEmpty()
    {
        if (top >= 1)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

int main()
{
    // let's create a stack using LinkedList...
    /*
    Steps:
    1. create a stack class
    2. create a node class
    3. using node define stack functions in stack class
    4. functions like push, pop, peek, size, isempty.
    */

    Stack one;
    one.push(45);
    one.push(33);
    cout << one.peek() << endl;
    one.pop();
    cout << one.peek() << endl;
    one.push(21);
    one.push(35);
    cout<<"Size of One is : "<<one.size() << endl;
    cout<<"Is one Empty? : "<<one.isEmpty() << endl;


    return 0;
}