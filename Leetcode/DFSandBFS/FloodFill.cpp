#include <bits/stdc++.h>
using namespace ::std;

class Solution
{
public:
    void dfs(int i, int j, int source, int newColor, vector<vector<bool>> &visited, vector<vector<int>> &image)
    {
        if (i < 0 or j < 0 or i >= image.size() or j >= image[0].size() or visited[i][j] == 1 or image[i][j] != source)
            return;

        visited[i][j] = true;
        image[i][j] = newColor;
        dfs(i + 1, j, source, newColor, visited, image);
        dfs(i - 1, j, source, newColor, visited, image);
        dfs(i, j + 1, source, newColor, visited, image);
        dfs(i, j - 1, source, newColor, visited, image);
    }

    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int newColor)
    {
        int m = image.size();
        int n = image[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));

        int source = image[sr][sc];
        dfs(sr, sc, source, newColor, visited, image);
        return image;
    }
};