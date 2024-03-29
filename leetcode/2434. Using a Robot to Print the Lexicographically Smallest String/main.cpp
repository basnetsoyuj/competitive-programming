#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string robotWithString(string s)
    {
        vector<int> freq(26, 0);

        // keep track of frequency of each character
        for (char c : s)
            freq[c - 'a']++;

        stack<int> pile;
        string ans = "";

        // for each character
        for (char c : s)
        {
            // push it onto the stack
            pile.push(c);
            freq[c - 'a']--;

            // pop out of stack as long as it is not empty and the top of the stack is lexicographically smaller than smallest remaining character
            while (pile.size() && pile.top() <= get_current_min_char(freq))
            {
                ans += pile.top();
                pile.pop();
            }
        }

        // add remaining to the answer
        while (pile.size())
        {
            ans += pile.top();
            pile.pop();
        }

        return ans;
    }

    // get the smallest remaining character (frequency > 0)
    char get_current_min_char(vector<int> &freq)
    {
        for (int i = 0; i < 26; i++)
            if (freq[i])
                return 'a' + i;

        return 'a';
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    cout << solver.robotWithString("bac") << endl;
    cout << solver.robotWithString("bdda") << endl;
}