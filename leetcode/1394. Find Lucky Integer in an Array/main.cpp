#include <bits/stdc++.h>
#define N 500

using namespace std;

class Solution
{
public:
    int findLucky(vector<int> &arr)
    {
        int freq[N] = {0};

        for (int n : arr)
            freq[n - 1]++;

        for (int i = N - 1; i >= 0; i--)
            if (freq[i] == i + 1)
                return i + 1;

        return -1;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> v = {1, 2, 2, 2, 3, 3, 3};
    Solution solver;
    cout << solver.findLucky(v);
}