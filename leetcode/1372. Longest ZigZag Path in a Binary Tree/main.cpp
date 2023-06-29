#include <bits/stdc++.h>

using namespace std;

// greedy solution
// time-> O(nlogn), space -> O(n)
class Solution
{
public:
    int minSetSize(vector<int> &arr)
    {
        unordered_map<int, int> M;

        for (int &n : arr)
            M[n]++;

        priority_queue<int> p;

        for (auto val : M)
            p.push(val.second);

        int sum = 0;
        while (sum < arr.size() / 2)
        {
            sum += p.top();
            p.pop();
        }

        return M.size() - p.size();
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> v = {3, 3, 3, 3, 5, 5, 5, 2, 2, 7};
    Solution solver;
    cout << solver.minSetSize(v);
}
