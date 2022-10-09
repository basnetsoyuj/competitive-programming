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
    bool findTarget(TreeNode *root, int k)
    {
        unordered_set<int> M;
        return helper(root, k, M);
    }

    bool helper(TreeNode *root, int k, unordered_set<int> &M)
    {
        if (root == nullptr)
            return false;

        if (M.find(k - root->val) != M.end())
            return true;

        M.insert(root->val);

        return helper(root->left, k, M) || helper(root->right, k, M);
    }
};