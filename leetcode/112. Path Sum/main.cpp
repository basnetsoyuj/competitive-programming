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
    bool hasPathSum(TreeNode *root, int targetSum)
    {
        return root == nullptr ? false : helper(root, targetSum);
    }

    bool helper(TreeNode *root, int targetSum)
    {
        if (root->left == nullptr && root->right == nullptr && targetSum == root->val)
            return true;

        if (root->left && helper(root->left, targetSum - root->val))
            return true;

        if (root->right && helper(root->right, targetSum - root->val))
            return true;

        return false;
    }
};