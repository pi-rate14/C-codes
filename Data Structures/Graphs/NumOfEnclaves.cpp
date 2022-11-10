//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{

private:
    void dfs(int row, int col, vector<vector<int>> &grid, vector<vector<bool>> &vis)
    {
        vis[row][col] = true;

        int rowvec[4] = {-1, 0, 1, 0};
        int colvec[4] = {0, -1, 0, 1};

        for (int i = 0; i < 4; i++)
        {
            int nrow = row + rowvec[i];
            int ncol = col + colvec[i];

            if (nrow >= 0 && nrow < grid.size() && ncol >= 0 && ncol <= grid[0].size() && !vis[nrow][ncol] && grid[nrow][ncol] == 1)
            {
                dfs(nrow, ncol, grid, vis);
            }
        }
    }

public:
    int numberOfEnclaves(vector<vector<int>> &grid)
    {
        // Code here
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false));

        for (int i = 0; i < m; i++)
        {

            if (grid[i][0] == 1 && !vis[i][0])
            {
                dfs(i, 0, grid, vis);
            }

            if (grid[i][n - 1] == 1 && !vis[i][n - 1])
            {
                dfs(i, n - 1, grid, vis);
            }
        }

        for (int j = 0; j < n; j++)
        {

            if (grid[0][j] == 1 && !vis[0][j])
            {
                dfs(0, j, grid, vis);
            }

            if (grid[m - 1][j] == 1 && !vis[m - 1][j])
            {
                dfs(m - 1, j, grid, vis);
            }
        }

        int count = 0;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1 && !vis[i][j])
                {
                    count++;
                }
            }
        }

        return count;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends