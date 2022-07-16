#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<string> wordSubsets(vector<string> &words1, vector<string> &words2)
    {
        vector<string> words;

        // keeping track of the max frequency of each character in all substrings
        int max_freq[26] = {0};
        for (string s : words2)
        {
            int freq[26] = {0};
            for (char c : s)
                max_freq[c - 'a'] = max(max_freq[c - 'a'], ++freq[c - 'a']);
        }

        // check for each word
        for (string s : words1)
        {
            int freq[26] = {0};
            for (char c : s)
                freq[c - 'a']++;

            bool flag = false;

            for (int i = 0; i < 26; i++)
                if (max_freq[i] > freq[i])
                    flag = true;

            if (!flag)
                words.push_back(s);
        }

        return words;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;

    vector<string> words1 = {"amazon", "apple", "facebook", "google", "leetcode"};
    vector<string> words2 = {"e", "o"};

    for (string s : solver.wordSubsets(words1, words2))
        cout << s << endl;
}
