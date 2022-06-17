#include <bits/stdc++.h>

using namespace std;

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
    vector<int> preorder(Node *root)
    {
        vector<int> v;
        if (root)
            preorder(root, v);
        return v;
    }

    void preorder(Node *root, vector<int> &v)
    {
        v.push_back(root->val);
        for (Node *child : root->children)
            preorder(child, v);
    }
};