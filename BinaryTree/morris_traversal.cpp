// C++ program to find k'th smallest element in BST
// #include<bits/stdc++.h>
#include <iostream>
// #include<bits/stdc++>
using namespace std;

// A BST node
struct Node
{
    int key;
    Node *left, *right;
};

// A function to find
int KSmallestUsingMorris(Node *root, int k)
{
    // write your code here...

    int count = 0;
    int kElement = INT_MIN;

    Node *curr = root;

    while (curr != NULL)
    {
        if (curr->left == NULL)
        {
            count++;

            if (count == k)

            {
                kElement = curr->key;
            }

            curr = curr->right;
        }
        else
        {

            Node *pre = curr->left;

            while (pre->right != NULL && pre->right != curr)
            {
                pre = pre->right;
            }

            if (pre->right == NULL)
            {
                pre->right = curr;
                curr = curr->left;
            }
            else
            {

                pre->right = NULL;

                count++;

                if (count == k)

                {
                    kElement = curr->key;
                }

                curr = curr->right;
            }
        }
    }

    return kElement;
}

// A utility function to create a new BST node
Node *newNode(int item)
{
    Node *temp = new Node;
    temp->key = item;
    temp->left = temp->right = NULL;
    return temp;
}

/* A utility function to insert a new node with given key in BST */
Node *insert(Node *node, int key)
{
    /* If the tree is empty, return a new node */
    if (node == NULL)
        return newNode(key);

    /* Otherwise, recur down the tree */
    if (key < node->key)
        node->left = insert(node->left, key);
    else if (key > node->key)
        node->right = insert(node->right, key);

    /* return the (unchanged) node pointer */
    return node;
}

// Driver Program to test above functions
int main()
{
    /* Let us create following BST
            50
        /	 \
        30	 70
        / \ / \
    20 40 60 80 */
    Node *root = NULL;
    root = insert(root, 50);
    insert(root, 30);
    insert(root, 20);
    insert(root, 40);
    insert(root, 70);
    insert(root, 60);
    insert(root, 80);

    for (int k = 1; k <= 7; k++)
        cout << KSmallestUsingMorris(root, k) << " ";

    return 0;
}
