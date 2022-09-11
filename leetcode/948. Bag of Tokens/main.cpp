#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    int bagOfTokensScore(vector<int> &tokens, int power)
    {
        sort(tokens.begin(), tokens.end());

        int s = 0, e = tokens.size() - 1, score = 0, max_score = 0;
        while (s <= e && score >= 0)
        {
            while (s <= e && tokens[s] <= power)
            {
                max_score = max(max_score, ++score);
                power -= tokens[s++];
            }

            while (s <= e && tokens[s] > power)
            {
                power += tokens[e--];
                score--;
            }
        }

        return max_score;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> nums = {71, 55, 82};
    int power = 54;
    Solution solver;

    cout << solver.bagOfTokensScore(nums, power) << endl;
}
