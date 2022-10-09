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
        vector<int> v;

        // Inorder traversal to get the sorted array
        inorder_fill(root, v);

        // for each element, check if there is a number in the array that is equal to k - element
        for (int i = 0; i < v.size(); i++)
            if (binary_search(v, 0, i - 1, k - v[i]) != -1 || binary_search(v, i + 1, v.size() - 1, k - v[i]) != -1)
                return true;

        return false;
    }

    // convert BST to sorted vector
    void inorder_fill(TreeNode *root, vector<int> &v)
    {
        if (root->left)
            inorder_fill(root->left, v);

        v.push_back(root->val);

        if (root->right)
            inorder_fill(root->right, v);
    }

    // function to search for a value in a sorted vector
    int binary_search(vector<int> &v, int l, int r, int val)
    {
        int m;
        while (l <= r)
        {
            m = (l + r) / 2;
            if (v[m] == val)
                return m;
            else if (v[m] < val)
                l = m + 1;
            else
                r = m - 1;
        }

        return -1;
    }
};