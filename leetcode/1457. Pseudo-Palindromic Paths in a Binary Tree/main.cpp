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
    int pseudoPalindromicPaths(TreeNode *root)
    {
        int count = 0;
        helper(root, 0, count);
        return count;
    }

    void helper(TreeNode *root, int bits, int &count)
    {
        if (root == nullptr)
            return;

        bits = bits ^ (1 << root->val);

        if (root->left == nullptr && root->right == nullptr && (bits & (bits - 1)) == 0)
            count++;

        helper(root->left, bits, count);
        helper(root->right, bits, count);
    }
};