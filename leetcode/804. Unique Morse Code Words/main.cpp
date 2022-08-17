#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    string M[26] = {".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.."};
    int uniqueMorseRepresentations(vector<string> &words)
    {
        unordered_set<string> morse_set;

        for (string &word : words)
        {
            string morse = "";
            for (char &c : word)
                morse += M[c - 'a'];
            morse_set.insert(morse);
        }

        return morse_set.size();
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<string> words = {"gin", "zen", "gig", "msg"};
    Solution solver;
    cout << solver.uniqueMorseRepresentations(words);
}