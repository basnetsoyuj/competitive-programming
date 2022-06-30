#include <bits/stdc++.h>

using namespace std;

// Algorithm: O(n) Runtime, O(1) space
class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        k %= nums.size();
        reverse(nums, 0, nums.size() - 1);
        reverse(nums, 0, k - 1);
        reverse(nums, k, nums.size() - 1);
    }

    void reverse(vector<int> &nums, int s, int e)
    {
        while (s <= e)
            swap(nums[s++], nums[e--]);
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {1, 2, 3, 4, 5, 6, 7};

    Solution solver;
    solver.rotate(nums, 3);

    cout << '{';
    for (int i = 0; i < nums.size(); i++)
    {
        if (i)
            cout << ',';
        cout << nums[i];
    }
    cout << '}';
}