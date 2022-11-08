//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
private:
    bool isValid(int i, int j, vector<vector<char>> &grid, vector<vector<bool>> &vis)
    {
        return i >= 0 && i < grid.size() && j >= 0 && j < grid[0].size() && grid[i][j] == '1' && vis[i][j] == false;
    }

    void dfs(int row, int col, vector<vector<char>> &grid, vector<vector<bool>> &vis)
    {
        if (!isValid(row, col, grid, vis))
        {
            return;
        }

        vis[row][col] = true;
        for (int i = -1; i <= 1; i++)
        {
            for (int j = -1; j <= 1; j++)
            {
                int nrow = row + i;
                int ncol = col + j;
                dfs(nrow, ncol, grid, vis);
            }
        }
    }

public:
    // Function to find the number of islands.
    int numIslands(vector<vector<char>> &grid)
    {
        // Code here
        vector<vector<bool>> vis(grid.size(), vector<bool>(grid[0].size(), false));
        int count = 0;
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (!vis[i][j] && grid[i][j] == '1')
                {
                    count++;
                    dfs(i, j, grid, vis);
                }
            }
        }
        return count;
    }
};

//{ Driver Code Starts.
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> grid(n, vector<char>(m, '#'));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.numIslands(grid);
        cout << ans << '\n';
    }
    return 0;
}
// } Driver Code Ends