#include <bits/stdc++.h>

using namespace std;

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
    vector<int> inorderTraversal(TreeNode *root)
    {
        vector<int> v;
        append(root, v);
        return v;
    }

    void append(TreeNode *node, vector<int> &v)
    {
        if (node == nullptr)
            return;

        append(node->left, v);
        v.push_back(node->val);
        append(node->right, v);
    }
};