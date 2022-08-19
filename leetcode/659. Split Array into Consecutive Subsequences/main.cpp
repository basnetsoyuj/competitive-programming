#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isPossible(vector<int> &nums)
    {
        unordered_map<int, int> freq, subsequences;

        for (int n : nums)
            freq[n]++;

        for (int n : nums)
        {
            // if already exhausted in subsequence, continue
            if (freq[n] == 0)
                continue;

            // if subsequence ending at n - 1 exists, add n to it
            if (subsequences[n - 1] > 0)
            {
                subsequences[n - 1]--;
                subsequences[n]++;
            }
            // create a new subsequence if n, n + 1 & n + 2 are present
            else if (freq[n + 1] > 0 && freq[n + 2] > 0)
            {
                freq[n + 1]--;
                freq[n + 2]--;
                subsequences[n + 2]++;
            }
            // else it cannot be done
            else
                return false;

            freq[n]--;
        }

        return true;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {1, 2, 3, 3, 4, 4, 5, 5};
    Solution solver;

    cout << boolalpha << solver.isPossible(nums);
}