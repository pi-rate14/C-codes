#include <bits/stdc++.h>
using namespace ::std;
class Solution
{
public:
    int dfs(int i, int j, vector<vector<int>> &grid)
    {
        if (i < 0 or j < 0 or i >= grid.size() or j >= grid[0].size() or grid[i][j] == 0)
            return 0;

        grid[i][j] = 0;
        int count = 1;
        count += dfs(i + 1, j, grid) + dfs(i - 1, j, grid) + dfs(i, j + 1, grid) + dfs(i, j - 1, grid);
        return count;
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> visited(m, vector<bool>(n, false));
        int mx = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1)
                {
                    mx = max(mx, dfs(i, j, grid));
                }
            }
        }
        return mx;
    }
};