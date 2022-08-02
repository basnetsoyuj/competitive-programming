#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    const int mod = pow(10, 9) + 7;
    int numFactoredBinaryTrees(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        
        unordered_map<int, long> dp;
        dp[arr[0]] = 1;
        
        for(int i=1; i < arr.size(); i++){
            long count = 1;
            for(pair<int, long> j: dp){
                int elem = j.first;
                // no of ways to construct left * (and) right tree
                if(arr[i] % elem == 0 && dp.find(arr[i] / elem) != dp.end())
                    count += dp[elem] * dp[arr[i] / elem];
            }
            dp[arr[i]] = count;
        }
        
        // add all the possibilities
        int num_of_trees = 0;
        for(pair<int, long> j: dp)
            num_of_trees = (num_of_trees + j.second) % mod;
        
        return num_of_trees;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;

    vector<int> arr = {2,4,5,10};
    
    cout << solver.numFactoredBinaryTrees(arr);
}
