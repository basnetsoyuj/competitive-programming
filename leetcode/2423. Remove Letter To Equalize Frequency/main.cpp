#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool all_same(vector<int> &M)
    {
        int val;

        for (int n : M)
            if (n > 0)
            {
                val = n;
                break;
            }

        for (int i = 0; i < M.size(); i++)
            if (M[i] > 0 && M[i] != val)
                return false;

        return true;
    }

    bool equalFrequency(string word)
    {
        vector<int> count(26);

        for (char c : word)
            count[c - 'a']++;

        for (char i = 0; i < count.size(); i++)
            if (count[i] > 0)
            {
                count[i]--;

                if (all_same(count))
                    return true;

                count[i]++;
            }

        return false;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << boolalpha << solver.equalFrequency("aaabbbcccd") << endl;
}
