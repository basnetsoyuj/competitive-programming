#include <bits/stdc++.h>

using namespace std;

// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};


class Solution {
public:    
    Node* cloneGraph(Node* node) {
        // if no graph, return nullptr
        if(node == nullptr)
            return nullptr;
        
        // initialize array for memoization
        Node* M[101] = {nullptr};
        
        return cloneGraph(node, M);
    }
    
    Node* cloneGraph(Node* node, Node* M[101]){
        const int i = node->val;
        
        // if already in memory, return that pointer
        if(M[i] != nullptr)
            return M[i];
        
        // else copy node val and its neighbors
        M[i] = new Node(i);
        for(Node* neighbor : node->neighbors) 
            M[i]->neighbors.push_back(cloneGraph(neighbor, M));
       
        return M[i];
    }
};