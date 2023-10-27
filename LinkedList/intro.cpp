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

    ~Node(){
        int value = this->data;

        if (this->next != nullptr)
        {
            this->next = nullptr;
            delete next;
        }
        
        cout<<"Value " << value<< " is deleted;"<<endl;
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

void insertAtHead(Node *&head, int d)
{
    Node *newnode = new Node(d);
    newnode->next = head;
    head = newnode;
}

void insertAtTail(Node *&tail, int d)
{
    Node *temp = new Node(d);

    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    if (position == 1)
    {
        insertAtHead(head, d);
        return;
    }

    Node *newNode = new Node(d);
    int count = 1;

    Node *temp = head;

    while (count < position - 1)
    {
        if (temp->next == nullptr)
        {
            insertAtTail(tail, d);
            return;
        }
        temp = temp->next;
        count++;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void deleteAtPosition(Node *&head, Node *&tail, int position)
{
    if (position == 1)
    {   Node * temp = head;
        head = head->next;
        // temp->next = NULL;
        delete temp;
    }
    else{
        Node * prev = nullptr;
        Node * curr = head;
        
        int count = 1;

        while (count < position)
        {   
            
            prev = curr;
            curr= curr->next;
            count++;

        }

        if(curr->next == nullptr)
        {
            tail = prev;
        }
            prev->next = curr->next;
            // curr->next = NULL;

            delete curr;
    }
    
}
int main()
{
    // let's start using Linked List

    // creating a node in heap
    Node *node1 = new Node(3);

    // cout<<node1->data<<endl;
    // cout<<node1->next <<endl;

    // creating a head to pass
    Node *head = node1;

    // creating tail
    Node *tail = node1;

    // inserting at head
    cout << "Before inserting Head: ";
    print(head);
    insertAtHead(head, 12);
    insertAtHead(head, 23);
    cout << "After inserting at Head : ";
    print(head);

    // inserting at tail
    insertAtTail(tail, 8);
    insertAtTail(tail, 99);
    cout << "After inserting at Tail : ";
    print(head);

    // inserting at certain position
    insertAtPosition(head, tail, 3, 76);
    cout << "After inserting at 3: ";
    print(head);
    insertAtPosition(head, tail, 1, 75);
    cout << "After inserting at 1: ";
    print(head);
    insertAtPosition(head, tail, 4, 73);
    cout << "After inserting at 4: ";
    print(head);
    insertAtPosition(head, tail, 23, 42);
    cout << "After inserting at last: ";
    print(head);

    //deleting at certai position
    deleteAtPosition(head, tail, 1);
    cout<<"After Deleting at position 1: "; print(head);
    deleteAtPosition(head, tail, 5);
    cout<<"After deleting at position 5: "; print(head);
     deleteAtPosition(head, tail, 7);
    cout<<"After deleting at position 7: "; print(head);

    cout<<"head is at: "<<head->data<<endl;
    cout<<"Tail is at: "<<tail->data<<endl;

    cout << "\n\nGreat it's working..." << endl;
    cout << "Happy Learning, Love the Process" << endl;
    return 0;
}