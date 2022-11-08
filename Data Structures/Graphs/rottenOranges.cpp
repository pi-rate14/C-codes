//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{

public:
    // Function to find minimum time required to rot all oranges.
    int orangesRotting(vector<vector<int>> &grid)
    {
        // Code here
        vector<vector<int>> vis(grid.size(), vector<int>(grid[0].size(), 0));

        queue<pair<pair<int, int>, int>> q;

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 2)
                {
                    q.push({{i, j}, 0});
                    vis[i][j] == 2;
                }
            }
        }

        int rowvec[4] = {-1, 0, 1, 0};
        int colvec[4] = {0, -1, 0, 1};

        int maxTime = 0;

        while (!q.empty())
        {
            int row = q.front().first.first;
            int col = q.front().first.second;
            int time = q.front().second;

            maxTime = max(time, maxTime);

            q.pop();

            for (int i = 0; i < 4; i++)
            {
                int nrow = row + rowvec[i];
                int ncol = col + colvec[i];

                if (nrow >= 0 && nrow < grid.size() && ncol >= 0 && ncol < grid[0].size() && grid[nrow][ncol] == 1 && vis[nrow][ncol] != 2)
                {
                    vis[nrow][ncol] = 2;
                    q.push({{nrow, ncol}, time + 1});
                }
            }
        }

        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (grid[i][j] == 1 && vis[i][j] != 2)
                {
                    return -1;
                }
            }
        }

        return maxTime;
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
        vector<vector<int>> grid(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        int ans = obj.orangesRotting(grid);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends