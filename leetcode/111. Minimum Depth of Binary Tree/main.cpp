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
    int minDepth(TreeNode *root)
    {
        if (root == nullptr)
            return 0;
        else if (root->left && root->right)
            return min(minDepth(root->left), minDepth(root->right)) + 1;
        else if (root->left)
            return minDepth(root->left) + 1;
        else if (root->right)
            return minDepth(root->right) + 1;
        else
            return 1;
    }
};

