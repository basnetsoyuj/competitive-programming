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
    bool isValidBST(TreeNode *root)
    {
        return checker(root, (long)INT_MIN - 1, (long)INT_MAX + 1);
    }

    // helper method that recursively checks if the value in a node is within lower and upper bound
    bool checker(TreeNode *root, long min_val, long max_val)
    {
        if (root == nullptr)
            return true;

        if (root->val > min_val && root->val < max_val)
            // (min < left child val < val) && (val < right child val < max)
            return checker(root->left, min_val, root->val) && checker(root->right, root->val, max_val);

        return false;
    }
};