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
    vector<vector<int>> findLeaves(TreeNode *root)
    {
        vector<vector<int>> ans;
        vector<int> leaves;

        while (root)
        {
            root = helper(root, leaves);
            ans.push_back(leaves);
            leaves.clear();
        }
        return ans;
    }

    TreeNode *helper(TreeNode *root, vector<int> &ans)
    {
        // add if it is leaf node and make it nullptr
        if (root->left == nullptr && root->right == nullptr)
        {
            ans.push_back(root->val);
            return nullptr;
        }

        // call on left and right child recursively
        if (root->left)
            root->left = helper(root->left, ans);

        if (root->right)
            root->right = helper(root->right, ans);

        return root;
    }
};
