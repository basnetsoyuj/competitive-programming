#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> M;
        bool used[26] = {0};

        int i = 0, idx = 0;

        while(i < s.length()){
            string str = "";
            while(s[i] != '\0' && s[i] != ' ')
                    str += s[i++];
            i++;

            if(M.find(str) == M.end()){
                M[str] = pattern[idx];
                
                // make sure no two words map to same char
                if(used[pattern[idx] - 'a'])
                    return false;
                else
                    used[pattern[idx] - 'a'] = true;
            }

            // make sure each word maps to only one char
            else if(M[str] != pattern[idx])
                return false;

            idx++;
        }
        
        // return true only if every char in the pattern was mapped to a word (necessary for bijection)
        return idx == pattern.length();
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    string pattern = "abba", s = "dog cat cat dog";

    cout << boolalpha << solver.wordPattern(pattern, s) << endl;
}