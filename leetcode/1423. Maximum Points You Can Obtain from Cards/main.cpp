#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int maxScore(vector<int> &cardPoints, int k)
    {
        int sum = 0;

        for (int i = 0; i < k; i++)
            sum += cardPoints[i];

        int max_sum = sum, pointer = cardPoints.size() - 1;

        for (int i = k - 1; i >= 0; i--)
        {
            sum += cardPoints[pointer--] - cardPoints[i];
            if (sum > max_sum)
                max_sum = sum;
        }

        return max_sum;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//

int main()
{
    vector<int> v = {1, 2, 3, 4, 5, 6, 1};

    Solution solver;
    cout << solver.maxScore(v, 3);
}