#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool detectCapitalUse(string word) {
        bool is_upper(1), is_lower(1);
        bool first_upper = word[0] == toupper(word[0]) ? true : false;

        for(int i = 1; i < word.size(); i++)
            if(word[i] == toupper(word[i]))
                is_lower = false;
            else
                is_upper = false;

        if(is_lower || (is_upper && first_upper))
            return true;
        else
            return false;
    }
};