#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        if (color == image[sr][sc])
            return image;

        helper(image, sr, sc, color, image[sr][sc]);
        return image;
    }

    void helper(vector<vector<int>> &image, int sr, int sc, int color, int initial_color)
    {
        if (sr < 0 || sc < 0 || sr >= image.size() || sc >= image[0].size() || image[sr][sc] != initial_color)
            return;

        image[sr][sc] = color;
        helper(image, sr - 1, sc, color, initial_color);
        helper(image, sr + 1, sc, color, initial_color);
        helper(image, sr, sc - 1, color, initial_color);
        helper(image, sr, sc + 1, color, initial_color);
    }
};