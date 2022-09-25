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
    vector<vector<int>> pathSum(TreeNode *root, int targetSum)
    {
        vector<vector<int>> M;
        vector<int> seen;

        if (root != nullptr)
            helper(root, M, seen, 0, targetSum);
        return M;
    }

    void helper(TreeNode *root, vector<vector<int>> &M, vector<int> &seen, int sum, int &targetSum)
    {
        seen.push_back(root->val);
        sum += root->val;

        if (root->left == nullptr && root->right == nullptr && sum == targetSum)
            M.push_back(seen);
        else
        {
            if (root->left != nullptr)
                helper(root->left, M, seen, sum, targetSum);
            if (root->right != nullptr)
                helper(root->right, M, seen, sum, targetSum);
        }

        seen.pop_back();
    }
};