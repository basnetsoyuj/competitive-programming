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

class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums, 0, nums.size() - 1);
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums, int s, int e) {
        if(s > e)
            return nullptr;
        
        int mid = (s + e)/2;
        
        return new TreeNode(nums[mid], sortedArrayToBST(nums, s, mid - 1), sortedArrayToBST(nums,  mid + 1, e));
    }
};


// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {-10, -3, 0, 5, 9};
    Solution solver;
    cout << solver.sortedArrayToBST(nums);
}
