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
    vector<double> averageOfLevels(TreeNode *root)
    {
        vector<double> sum;
        vector<int> num_nodes;

        averageOfLevels(root, 0, sum, num_nodes);

        for (int i = 0; i < sum.size(); i++)
            sum[i] /= num_nodes[i];

        return sum;
    }

    void averageOfLevels(TreeNode *root, int level, vector<double> &sum, vector<int> &num_nodes)
    {
        if (root == nullptr)
            return;

        if (sum.size() == level)
        {
            sum.push_back(0);
            num_nodes.push_back(0);
        }

        sum[level] += root->val;
        num_nodes[level]++;

        averageOfLevels(root->left, level + 1, sum, num_nodes);
        averageOfLevels(root->right, level + 1, sum, num_nodes);
    }
};