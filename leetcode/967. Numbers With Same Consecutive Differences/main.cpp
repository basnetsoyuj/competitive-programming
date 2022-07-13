#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> numsSameConsecDiff(int n, int k)
    {
        vector<int> nums;
        for (int i = 1; i <= 9; i++)
            numsSameConsecDiff(nums, n - 1, k, i);
        return nums;
    }

    void numsSameConsecDiff(vector<int> &nums, int n, int k, int num)
    {
        if (n == 0)
        {
            nums.push_back(num);
            return;
        }

        int digit = num % 10;
        if (digit + k <= 9)
            numsSameConsecDiff(nums, n - 1, k, num * 10 + digit + k);

        // if k == 0 then (digit + k) and (digit - k) are the same
        if (k != 0 && digit - k >= 0)
            numsSameConsecDiff(nums, n - 1, k, num * 10 + digit - k);
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    for (int num : solver.numsSameConsecDiff(2, 0))
        cout << num << ' ';
}
