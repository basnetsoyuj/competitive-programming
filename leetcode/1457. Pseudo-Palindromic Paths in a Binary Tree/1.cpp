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
        bitset<9> info(0);
        return helper(root, info);
    }

    int helper(TreeNode *root, bitset<9> &info)
    {
        int n = 0;

        info.flip(root->val - 1);

        if (root->left == nullptr && root->right == nullptr)
            n = info.count() <= 1 ? 1 : 0;
        else
        {
            if (root->left)
                n += helper(root->left, info);
            if (root->right)
                n += helper(root->right, info);
        }

        info.flip(root->val - 1);

        return n;
    }
};