#include <bits/stdc++.h>

using namespace std;

class Solution
{
public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        if (color == image[sr][sc])
            return image;
        recursiveFloodFill(image, sr, sc, color);
        return image;
    }

    void recursiveFloodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        int old_color = image[sr][sc];
        image[sr][sc] = color;

        // if any direction has the same color as original, then color it recursively
        if (sr - 1 >= 0 && image[sr - 1][sc] == old_color)
            recursiveFloodFill(image, sr - 1, sc, color);

        if (sr + 1 < image.size() && image[sr + 1][sc] == old_color)
            recursiveFloodFill(image, sr + 1, sc, color);

        if (sc - 1 >= 0 && image[sr][sc - 1] == old_color)
            recursiveFloodFill(image, sr, sc - 1, color);

        if (sc + 1 < image[0].size() && image[sr][sc + 1] == old_color)
            recursiveFloodFill(image, sr, sc + 1, color);
    }
};