#include <bits/stdc++.h>

using namespace std;

int max_path_sum(vector<vector<int>> &triangle)
{
    // choose the max and add it to the upper element
    for (int i = triangle.size() - 2; i >= 0; i--)
        for (int j = 0; j <= i; j++)
            triangle[i][j] += max(triangle[i + 1][j], triangle[i + 1][j + 1]);

    return triangle[0][0];
}

int main()
{
    ifstream file("p067_triangle.txt");

    int n, nodes(1);
    vector<vector<int>> triangle;

    while (nodes <= 100)
    {
        vector<int> temp(nodes);
        for (int i = 0; i < nodes; i++)
        {
            file >> n;
            temp[i] = n;
        }
        triangle.push_back(temp);
        nodes++;
    }

    cout << max_path_sum(triangle); // answer: 7273

    file.close();
}