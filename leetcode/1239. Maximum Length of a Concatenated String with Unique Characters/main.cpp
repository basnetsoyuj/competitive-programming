#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxLength(vector<string> &arr)
    {
        // make a vector of bitsets representing whether each a-z is present or not
        vector<bitset<26>> counter(arr.size(), bitset<26>());

        // make a bool vector to keep track of what strings to not include
        // for strings that have duplicates like "aa"
        vector<bool> exclude(arr.size());

        for (int i = 0; i < arr.size(); i++)
        {
            for (char c : arr[i])
            {
                // if it was already 1, add to exclude since it has duplicate
                if (counter[i][c - 'a'])
                    exclude[i] = true;

                counter[i][c - 'a'] = 1;
            }
        }

        return helper(arr, counter, exclude, bitset<26>(), 0);
    }

    int helper(vector<string> &arr, vector<bitset<26>> &counter, vector<bool> &exclude, bitset<26> current, int i)
    {
        // base case: if i exceeds max index, max size of string is 0
        if (i >= arr.size())
            return 0;

        // answer when current string (index i) is not selected
        int eval = helper(arr, counter, exclude, current, i + 1);

        // if string is not in excluded and current (tracks what we have selected till now) and bitset are disjoint
        if (!exclude[i] && (current & counter[i]).none())
            // get the max of eval and (arr[i].size() + rest of the answer)
            // update current to be current | counter[i] since we selected the string
            eval = max(eval, (int)arr[i].size() + helper(arr, counter, exclude, current | counter[i], i + 1));

        return eval;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<string> arr = {"zog", "nvwsuikgndmfexxgjtkb", "nxko"};
    Solution solver;

    cout << solver.maxLength(arr) << endl;
}