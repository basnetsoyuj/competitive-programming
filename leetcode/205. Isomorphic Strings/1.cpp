#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        return generate_code(s) == generate_code(t);
    }

    string generate_code(string s)
    {
        unordered_map<char, int> m;
        string code("");

        for (int i = 0; i < s.length(); i++)
        {
            if (m.find(s[i]) == m.end())
                m[s[i]] = i;

            code += " " + to_string(m[s[i]]);
        }

        return code;
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
