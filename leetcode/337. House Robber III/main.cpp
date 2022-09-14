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
    int rob(TreeNode *root)
    {
        unordered_map<TreeNode *, int> M;
        return helper(root, true, M);
    }

    int helper(TreeNode *root, bool can_rob, unordered_map<TreeNode *, int> &M)
    {
        if (root == nullptr)
            return 0;

        if (can_rob && M.find(root) != M.end())
            return M[root];

        int val = helper(root->left, true, M) + helper(root->right, true, M);
        if (can_rob)
            M[root] = val = max(root->val + helper(root->left, false, M) + helper(root->right, false, M), val);

        return val;
    }
};