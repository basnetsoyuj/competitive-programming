#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> findOriginalArray(vector<int> &changed)
    {
        sort(changed.begin(), changed.end());
        unordered_map<int, int> M;
        vector<int> original;

        for (int n : changed)
            M[n]++;

        for (int n : changed)
            if (M[n])
            {
                M[n]--;
                if (--M[2 * n] < 0)
                    return {};
                else
                    original.push_back(n);
            }
        return original;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    vector<int> changed = {1, 3, 4, 2, 6, 8};

    for (int n : solver.findOriginalArray(changed))
        cout << n << " ";
}
