#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    const int N = pow(10, 9) + 7;
    vector<int> productQueries(int n, vector<vector<int>> &queries)
    {
        vector<int> powers, ans;

        int shift = 0;
        do
        {
            if (n & 1)
                powers.push_back(pow(2, shift));
            shift++;
        } while (n >>= 1);

        for (vector<int> &query : queries)
        {
            long prod = 1;
            for (int i = query[0]; i <= query[1]; i++)
                prod = ((powers[i] % N) * prod) % N;
            ans.push_back(prod);
        }

        return ans;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<vector<int>> queries = {{0, 1}, {2, 2}, {0, 3}};
    Solution solver;

    for (int &ans : solver.productQueries(15, queries))
        cout << ans << " ";
    cout << endl;
}