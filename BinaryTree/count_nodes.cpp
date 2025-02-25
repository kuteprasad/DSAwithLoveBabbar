#include <iostream>
//  * Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 };
 
class Solution {
    private:
    void count_nodes(TreeNode* root, int &count) {
    // Base case: If the current node is nullptr, return.
    if (root == nullptr)
        return;

    // Recursively count nodes in the left and right subtrees.
    count_nodes(root->left, count);
    count++;
    count_nodes(root->right, count);
}

public:
    int countNodes(TreeNode* root) {
          int count = 0;
    count_nodes(root, count);
    return count;
    }
};


int main() {
    // Create nodes for the binary tree
    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);
    root->right->left = new TreeNode(6);
    root->right->right = new TreeNode(7);

    // Create an instance of the Solution class
    Solution solution;

    // Call the countNodes function to count the nodes in the tree
    int nodeCount = solution.countNodes(root);

    // Output the result
    std::cout << "Number of nodes in the binary tree: " << nodeCount << std::endl;

    // Clean up: free the allocated memory
    // Note: In a real-world scenario, you might want to implement a proper destructor
    // to release the memory occupied by the tree nodes.
    delete root->right->right;
    delete root->right->left;
    delete root->left->right;
    delete root->left->left;
    delete root->right;
    delete root->left;
    delete root;

    return 0;
}
