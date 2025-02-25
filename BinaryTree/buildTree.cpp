#include <iostream>
#include <queue>
#include "buildTree.h"
using namespace std;

class node
{
public:
    int data;
    node *left;
    node *right;

    node(int data)
    {
        this->data = data;
        this->left = nullptr;
        this->right = nullptr;
    }
};

node *buildtree(node *root)
{
    cout << "Enter the data: " << endl;
    int data;
    cin >> data;

    if (data == -1)
    {
        root = NULL;
        return root;
    }

    root = new node(data);

    cout << "Enter data for left of " << data << endl;
    root->left = buildtree(root->left);

    cout << "Enter data for right of " << data << endl;
    root->right = buildtree(root->right);
    return root;
}

void reverse_level_order_traversal(node *root)
{
    if (root == nullptr)
        return;

    deque<node*> q;
    deque<node*> s;
    // int data = root->data;
    q.push_back(root);
    q.push_back(nullptr);

    while (!q.empty())
    {
        node *temp = q.front();
        s.push_back(temp);
        q.pop_front();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push_back(NULL);
            }
        }
        else
        {
            // cout << temp->data << " ";
            if (temp->right != NULL)
                q.push_back(temp->right);
            if (temp->left != NULL)
                q.push_back(temp->left);
            
        }
    }

    while (!s.empty())
    {
        node* temp = s.back();
        s.pop_back();

        if(temp == NULL)
        {
            cout<<endl;
        }
        else{
            cout<<temp -> data << " " ;
        }
    }
    
}

void level_order_traversal(node *root)
{
    if (root == nullptr)
        return;

    queue<node *> q;
    // int data = root->data;
    q.push(root);
    q.push(nullptr);

    while (!q.empty())
    {
        node *temp = q.front();
        q.pop();

        if (temp == NULL)
        {
            cout << endl;
            if (!q.empty())
            {
                q.push(NULL);
            }
        }
        else
        {
            cout << temp->data << " ";
            if (temp->left != NULL)
                q.push(temp->left);
            if (temp->right != NULL)
                q.push(temp->right);
        }
    }
}

/*
data: 
1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 -1
*/
int main()
{
    node *root = nullptr;

    root = buildtree(root);

    level_order_traversal(root);

    reverse_level_order_traversal(root);

    return 0;
}