#include <bits/stdc++.h>

using namespace std;

// Definition for a Node.
class Node
{
public:
    int val;
    vector<Node *> children;

    Node() {}

    Node(int _val)
    {
        val = _val;
    }

    Node(int _val, vector<Node *> _children)
    {
        val = _val;
        children = _children;
    }
};

class Solution
{
public:
    vector<vector<int>> levelOrder(Node *root)
    {
        vector<vector<int>> nums;
        levelOrder(root, nums, 0);

        return nums;
    }

    void levelOrder(Node *root, vector<vector<int>> &nums, int i)
    {
        if (root == nullptr)
            return;

        if (nums.size() == i)
            nums.push_back(vector<int>());

        nums[i].push_back(root->val);

        for (Node *child : root->children)
            levelOrder(child, nums, i + 1);
    }
};