#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<int> eventualSafeNodes(vector<vector<int>> &graph)
    {
        vector<int> is_safe(graph.size(), -1);
        vector<int> ans;

        for (int i = 0; i < graph.size(); i++)
            if (helper(graph, is_safe, i))
                ans.push_back(i);

        return ans;
    }

    bool helper(vector<vector<int>> &graph, vector<int> &is_safe, int i)
    {
        if (graph[i].size() == 0)
            return true;

        if (is_safe[i] == -1)
        {
            is_safe[i] = 0;
            for (int x = 0; x < graph[i].size(); x++)
                if (helper(graph, is_safe, graph[i][x]) == false)
                    return false;
            is_safe[i] = 1;
        }

        return is_safe[i];
    }
};

// -------------------------------------------------------------//
// ---------------------To run the solution---------------------//
// -------------------------------------------------------------//
int main()
{
    vector<vector<int>> graph = {{1, 2}, {2, 3}, {5}, {0}, {5}, {}, {}};
    Solution solver;
    vector<int> ans = solver.eventualSafeNodes(graph);
    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";
}