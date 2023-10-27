#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    Node(int d)
    {
        this->data = d;
    }
    ~Node()
    {
        int value = this->data;

        if (this->next != NULL)
        {
            this->next = NULL;
        }
        if (this->prev != NULL)
        {

            this->prev = NULL;
        }

        delete next;
        delete prev;

        cout << "The memory is freed for the data : " << value << endl;
    }
};
int getLength(Node *&head)
{
    int a = 0;
    Node *temp = head;
    while (temp != nullptr)
    {
        a++;
        temp = temp->next;
    }

    return a;
}

void print(Node *&head, Node *&tail)
{
    cout << "\nLength of LinkedList is  : " << getLength(head) << endl;
    cout << "Value at head: " << head->data << " at Tail: " << tail->data << endl;
    Node *temp = head;

    cout << "LinkedList is as follows : ";
    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtHead(Node *&head, int d)
{
    Node *temp = new Node(d);

    temp->next = head;
    head->prev = temp;
    head = temp;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);

    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int d, int position)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        // for inserting at first position
        return;
    }

    Node *temp = head;
    int count = 1;
    while (count < position)
    {
        // for inserting at last position if position > length is given
        if (temp->next == nullptr)
        {
            insertAtTail(tail, d);
            // for inserting at last position
            return;
        }
        count++;
        temp = temp->next;
    }

    Node *insert = new Node(d);

    insert->next = temp;
    insert->prev = temp->prev;
    temp->prev->next = insert;
    temp->prev = insert;
}

void delAtPos(Node *&head, Node *&tail, int position)
{
    Node *temp = head;

    if (position == 1)
    {
        head = temp->next;
        temp->next->prev = nullptr;
        delete temp;
        return;
    }

    int count = 1;
    while (count < position)
    {
        count++;
        temp = temp->next;
    }

    if (temp->next == nullptr)
    {
        tail = temp->prev;
        tail->next = nullptr;
        delete temp;
        return;
    }

    temp->next->prev = temp->prev;
    temp->prev->next = temp->next;

    delete temp;
    return;
}

int main()
{
    // let's play with doubly linkedlist
    Node *n = new Node(13);
    Node *head = n;
    Node *tail = n;
    // cout<<"Length of LinkedList is : " << getLength(head) <<endl;

    print(head, tail);

    // inserting at head
    insertAtHead(head, 14);
    insertAtHead(head, 15);
    print(head, tail);

    // inserting at tail
    insertAtTail(tail, 12);
    insertAtTail(tail, 11);
    print(head, tail);

    // inserting at specific positions
    insertAtPosition(head, tail, 55, 4);
    insertAtPosition(head, tail, 55, 1);
    insertAtPosition(head, tail, 55, 14);
    print(head, tail);

    // deleting elements
    delAtPos(head, tail, 1);
    delAtPos(head, tail, 5);
    delAtPos(head, tail, 6);
    print(head, tail);

    return 0;
}