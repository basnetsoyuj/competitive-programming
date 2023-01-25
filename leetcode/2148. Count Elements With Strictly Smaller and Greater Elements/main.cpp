#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int countElements(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());

        int counter = 0;

        for (int n : nums)
            if (n != nums.front() && n != nums.back())
                counter++;

        return counter;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {11, 7, 2, 15};
    Solution solver;
    cout << solver.countElements(nums) << endl;
}