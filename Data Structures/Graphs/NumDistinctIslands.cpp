//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{

    void dfs(int row, int col, vector<vector<int>> &grid, vector<vector<bool>> &vis, int baserow, int basecol, vector<pair<int, int>> &path)
    {
        vis[row][col] = true;

        int rowvec[4] = {-1, 0, 1, 0};
        int colvec[4] = {0, -1, 0, 1};

        for (int i = 0; i < 4; i++)
        {
            int nrow = row + rowvec[i];
            int ncol = col + colvec[i];

            if (nrow >= 0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() && !vis[nrow][ncol] && grid[nrow][ncol] == 1)
            {
                path.push_back({baserow - nrow, basecol - ncol});
                dfs(nrow, ncol, grid, vis, baserow, basecol, path);
            }
        }
    }

public:
    int countDistinctIslands(vector<vector<int>> &grid)
    {
        // code here
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false));

        set<vector<pair<int, int>>> st;

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 1 && !vis[i][j])
                {
                    vector<pair<int, int>> path;
                    dfs(i, j, grid, vis, i, j, path);
                    st.insert(path);
                }
            }
        }

        return st.size();
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
        cout << obj.countDistinctIslands(grid) << endl;
    }
}
// } Driver Code Ends