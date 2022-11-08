#include <bits/stdc++.h>
using namespace ::std;

class Solution
{
private:
    void dfs(int row, int col, int oldColor, int newColor, vector<vector<int>> &image, vector<vector<int>> &ans)
    {
        ans[row][col] = newColor;

        int rowvec[4] = {-1, 0, 1, 0};
        int colvec[4] = {0, -1, 0, 1};

        for (int i = 0; i < 4; i++)
        {
            int nrow = row + rowvec[i];
            int ncol = col + colvec[i];

            if (nrow >= 0 && nrow < image.size() && ncol >= 0 && ncol < image[0].size() && image[nrow][ncol] == oldColor && ans[nrow][ncol] != newColor)
            {
                dfs(nrow, ncol, oldColor, newColor, image, ans);
            }
        }
    }

public:
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        vector<vector<int>> ans = image;
        int oldColor = image[sr][sc];
        dfs(sr, sc, oldColor, color, image, ans);
        return ans;
    }
};