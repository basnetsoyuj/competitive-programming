#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string, bool> M;
        M[""] = true;
        return wordBreak(s, wordDict, M);
    }
    
    bool wordBreak(string s, vector<string>& wordDict, unordered_map<string, bool> &M) {      
        if(M.find(s) != M.end())
            return M[s];
        
        // try to take out every word and check wordBreak of the remaining substring
        for(string word: wordDict){
            if(s.substr(0, word.size()) == word && wordBreak(s.substr(word.size(), s.size() - word.size()), wordDict, M))
                return M[s] = true;
        }
        
        return M[s] = false;
    }
    
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//

int main()
{
    string s = "catsandog"; 
    vector<string> wordDict = {"cats","dog","sand","and","cat"};

    Solution solver;

    cout << solver.wordBreak(s, wordDict);
}