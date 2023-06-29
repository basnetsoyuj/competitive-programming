#include <bits/stdc++.h>

using namespace std;

// Definition for a binary tree node.
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};

class Solution
{
public:
    TreeNode *deleteNode(TreeNode *root, int key)
    {
        if (root == nullptr)
            return nullptr;

        // delegate to left subtree
        if (key < root->val)
        {
            root->left = deleteNode(root->left, key);
        }
        // delegate to right subtree
        else if (key > root->val)
        {
            root->right = deleteNode(root->right, key);
        }
        else
        {
            // simple case when some or both children are null
            if (root->left == nullptr || root->right == nullptr)
            {
                TreeNode *newRoot = root->left ? root->left : root->right;
                delete root;
                return newRoot;
            }
            // otherwise swap with min node from right subtree and delete recursively again
            else
            {
                TreeNode *minNode = findMin(root->right);
                root->val = minNode->val;
                minNode->val = key;

                root->right = deleteNode(root->right, key);
            }
        }

        return root;
    }

    TreeNode *findMin(TreeNode *root)
    {
        return root->left ? findMin(root->left) : root;
    }
};