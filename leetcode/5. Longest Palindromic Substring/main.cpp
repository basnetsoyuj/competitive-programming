#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string longestPalindrome(string s)
    {
        if (!s.size())
            return "";

        int start = 0, end = 0;

        // check if each position is center of a palindrome
        for (int i = 0; i < s.size(); i++)
        {
            // to check odd length palindrome centered at i
            int odd_len = expand(s, i, i);

            // to check even length palindrome centered between i and i + 1
            int even_len = expand(s, i, i + 1);

            int len = max(odd_len, even_len);
            // replace is bigger palindrome is foundS
            if (len > end - start)
            {
                start = i - (len - 1) / 2;
                end = i + len / 2;
            }
        }

        return s.substr(start, end - start + 1);
    }

    int expand(string s, int l, int r)
    {
        // until palindrome is discovered, keep expanding
        while (l >= 0 && r < s.size() && s[l] == s[r])
        {
            l--;
            r++;
        }
        return r - l - 1;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.longestPalindrome("babad");
}