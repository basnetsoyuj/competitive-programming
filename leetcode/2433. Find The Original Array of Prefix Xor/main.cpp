#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    // we are given:
    // [a, a ^ b, a ^ b ^ c, a ^ b ^ c ^ d, ...]

    // we need to find
    // [a, b, c, d, ...]

    vector<int> findArray(vector<int> &pref)
    {
        int n, latest = pref[0];
        for (int i = 1; i < pref.size(); i++)
        {
            // n saves pref[i] temporarily
            n = pref[i];

            // xor current element with the last one i.e say (a ^ b ^ c ^ d) ^ (a ^ b ^ c) = d
            pref[i] ^= latest;

            // set latest as the original pref[i] (before changing) saved in n
            latest = n;
        }

        return pref;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {5, 2, 0, 3, 1};
    Solution solver;

    for (int i : solver.findArray(nums))
        cout << i << " ";
    cout << endl;
}