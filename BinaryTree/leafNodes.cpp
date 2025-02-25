#include <iostream>
#include <queue>
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

void count_leaves(node* root, int &count)
{
    if (root == nullptr)
    {
        count++;
        return ;
    }
    count_leaves(root->left, count);
    count_leaves(root->right, count);
}

/*
data: 
1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
*/

int main()
{
    node* root = NULL;

    root = buildtree(root);
    int count = 0; 
    count_leaves(root, count);
    count = count/2;
    cout<<"leaves value"<<count<<endl;
}