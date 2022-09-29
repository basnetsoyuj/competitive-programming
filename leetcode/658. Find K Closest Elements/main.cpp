#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> findClosestElements(vector<int> &arr, int k, int x)
    {
        vector<int> ans;

        // binary search
        int l = 0, r = arr.size() - 1, m;
        while (l <= r)
        {
            m = (l + r) / 2;

            if (arr[m] == x)
                break;
            else if (arr[m] > x)
                r = m - 1;
            else
                l = m + 1;
        }

        // two pointers
        int m2 = m - 1;
        if (m2 < 0)
        {
            m2++;
            m++;
        }

        // add elements using two pointers traversal till k elements
        while (k)
        {
            if (m2 < 0)
                ans.push_back(arr[m++]);
            else if (m >= arr.size() || abs(arr[m2] - x) <= abs(arr[m] - x))
                ans.push_back(arr[m2--]);
            else
                ans.push_back(arr[m++]);
            k--;
        }

        // sort before returning
        sort(ans.begin(), ans.end());
        return ans;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    Solution solver;

    for (int x : solver.findClosestElements(arr, 4, 3))
        cout << x << " ";
    cout << endl;
}