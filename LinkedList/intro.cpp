#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // creating constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void print(Node *&head)
{
    Node *temp = head;

    while (temp != nullptr)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << endl;
}

void insertAtHead(Node* &head, int d)
{
    Node* newnode = new Node(d);
    newnode->next = head;
    head = newnode;
}
int main()
{
    // let's start using Linked List

    // creating a node in heap
    Node *node1 = new Node(3);

    // cout<<node1->data<<endl;
    // cout<<node1->next <<endl;

    //creating a head to pass
    Node * head = node1;
    print(head);
    insertAtHead(head, 12);
    insertAtHead(head, 23);
    print(head);

    return 0;
}