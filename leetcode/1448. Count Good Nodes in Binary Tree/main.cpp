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
    int goodNodes(TreeNode *root)
    {
        int counter = 0;
        recurse(root, counter, root->val);
        return counter;
    }

    void recurse(TreeNode *root, int &counter, int max_val)
    {
        if (root == nullptr)
            return;

        int greater = max_val;
        if (root->val >= max_val)
        {
            counter++;
            greater = root->val;
        }

        recurse(root->left, counter, greater);
        recurse(root->right, counter, greater);
    }
};