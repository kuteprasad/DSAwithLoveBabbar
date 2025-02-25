#include <iostream>
#include <queue>
#include<stack>
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

void in_order_traversal(node* root)
{
    // LNR

    if(root == NULL)
    return ;

    in_order_traversal(root->left);
    cout<< root -> data << " " ;
    in_order_traversal(root -> right);
}

void pre_order_traversal(node* root)
{
    // NLR

    if(root == NULL)
    return ;

    cout<< root -> data << " " ;
    pre_order_traversal(root->left);
    pre_order_traversal(root -> right);
}

void post_order_traversal(node* root)
{
    // LRN

    if(root == NULL)
    return ;

    post_order_traversal(root->left);
    post_order_traversal(root -> right);
    cout<< root -> data << " " ;
}

//Iterative function for inorder tree traversal
void inOrder(node* root)
{
    stack<node*> s;
    node* curr = root;
 
    while (curr != NULL || !s.empty()) {
         
        // Reach the left most Node of the
        // curr Node
        while (curr != NULL) {
             
            // Place pointer to a tree node on
            // the stack before traversing
            // the node's left subtree
            s.push(curr);
            curr = curr->left;
        }
 
        // Current must be NULL at this point
        curr = s.top();
        s.pop();
 
        cout << curr->data << " ";
 
        // we have visited the node and its
        // left subtree.  Now, it's right
        // subtree's turn
        curr = curr->right;
 
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

    in_order_traversal(root);
    cout<<endl;
    pre_order_traversal(root);
    cout<<endl;
    post_order_traversal(root);

    cout<<endl;
    inOrder(root);
    return 0;
}