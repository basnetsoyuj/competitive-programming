#include <bits/stdc++.h>

using namespace std;

// M -> length of stamp
// N -> length of target
// O(N(N-M)) time, O(N(N-M)) space

// algorithm : start with target and perform reverse action (undo stamping)
class Solution
{
public:
    vector<int> movesToStamp(string stamp, string target)
    {
        vector<int> stamp_idx;

        // until target is all '?'
        while (target != string(target.size(), '?'))
        {
            // target if any progress is being made
            bool any_progress = false;
            for (int i = 0; i <= target.size() - stamp.size(); i++)
                // if stamping is valid, push index to stamp_idx & break out of loop
                if (compare(stamp, target, i))
                {
                    stamp_idx.push_back(i);
                    any_progress = true;
                    break;
                }

            // if no progress, return empty vector
            if (!any_progress)
                return {};
        }

        // return in reverse order as were undoing the stamps (in reverse order)
        reverse(stamp_idx.begin(), stamp_idx.end());
        return stamp_idx;
    }

    bool compare(string &stamp, string &target, int start)
    {
        // check if all chars are not '?'
        bool not_all = false;

        for (int i = 0; i < stamp.size(); i++)
            if (stamp[i] == target[start + i])
                not_all = true;
            // if anything other than matching char or '?', return false
            else if (target[start + i] != '?')
                return false;

        // change respective chars to '?'
        if (not_all)
            for (int i = 0; i < stamp.size(); i++)
                target[start + i] = '?';

        return not_all;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;

    for (int idx : solver.movesToStamp("oz", "ooozz"))
        cout << idx << " ";
}
