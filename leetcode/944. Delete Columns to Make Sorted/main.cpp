#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minDeletionSize(vector<string>& strs) {
        int counter = 0;
        for(int i = 0; i < strs[0].size(); i++){
            for(int j = 1; j < strs.size(); j++){
                if(strs[j][i] < strs[j - 1][i]){
                    counter++;
                    break;
                }
            }
        }

        return counter;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<string> strs = {"zyx","wvu","tsr"};
    Solution solver;

    cout << solver.minDeletionSize(strs);
}
