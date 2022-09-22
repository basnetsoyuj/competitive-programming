#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<string> sortPeople(vector<string> &names, vector<int> &heights)
    {
        unordered_map<int, string> M;

        for (int i = 0; i < names.size(); i++)
            M[heights[i]] = names[i];

        sort(heights.begin(), heights.end(), greater<int>());

        for (int i = 0; i < heights.size(); i++)
            names[i] = M[heights[i]];

        return names;
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    Solution solver;
    vector<string> names = {"David", "John", "Zach"};
    vector<int> heights = {65, 70, 60};
    for (string &s : solver.sortPeople(names, heights))
        cout << s << endl;
}
