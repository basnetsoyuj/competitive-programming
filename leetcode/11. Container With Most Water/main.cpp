#include <bits/stdc++.h>

using namespace std;

// O(n) time and O(1) space
// Two pointer approach, left and right pointers
// since the area of container is limited by the bar with smaller height, move the smaller bar
// and keep track of the max area
class Solution
{
public:
    int maxArea(vector<int> &height)
    {
        int max_area = 0, left = 0, right = height.size() - 1;

        while (left < right)
        {
            int width = right - left;
            max_area = max(max_area, width * min(height[left], height[right]));
            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return max_area;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<int> height = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    Solution solver;
    cout << solver.maxArea(height);
}