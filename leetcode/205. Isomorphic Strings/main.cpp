#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        if (s.length() != t.length())
            return false;

        int last_index_s[256], last_index_t[256];

        for (int i = 0; i < 256; i++)
            last_index_s[i] = last_index_t[i] = -1;

        for (int i = 0; i < s.length(); i++)
        {
            if (last_index_s[s[i]] != last_index_t[t[i]])
                return false;

            last_index_s[s[i]] = last_index_t[t[i]] = i;
        }
        return true;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//

int main()
{
    Solution solver;
    cout << boolalpha << solver.isIsomorphic("title", "paper");
}
