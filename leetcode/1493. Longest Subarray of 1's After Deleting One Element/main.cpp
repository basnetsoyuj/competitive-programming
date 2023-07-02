#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        vector<int> islands;

        int counter = 0;
        for(int i=0; i < nums.size(); i++){
            if(nums[i] == 1){
                counter++;
            }
            else {
                islands.push_back(counter);
                counter = 0;
            }
        }

        islands.push_back(counter);
        int max_ = islands[0] - 1;
        
        for(int i=0; i <= (signed) islands.size() - 2; i++)
            max_ = max(max_, islands[i] + islands[i + 1]);
        
        return max_;
    }
};