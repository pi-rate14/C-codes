//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution
{

private:
    void dfs(int row, int col, vector<vector<char>> &mat, vector<vector<bool>> &vis, int rowvec[], int colvec[])
    {
        vis[row][col] = true;

        for (int i = 0; i < 4; i++)
        {
            int nrow = row + rowvec[i];
            int ncol = col + colvec[i];

            if (nrow >= 0 && nrow < mat.size() && ncol >= 0 && ncol < mat[0].size() && mat[nrow][ncol] == 'O' && !vis[nrow][ncol])
            {
                dfs(nrow, ncol, mat, vis, rowvec, colvec);
            }
        }
    }

public:
    vector<vector<char>> fill(int m, int n, vector<vector<char>> mat)
    {
        // code here
        vector<vector<bool>> vis(mat.size(), vector<bool>(mat[0].size(), false));

        int rowvec[4] = {-1, 0, 1, 0};
        int colvec[4] = {0, -1, 0, 1};

        for (int i = 0; i < m; i++)
        {
            if (mat[i][0] == 'O' && !vis[i][0])
            {
                dfs(i, 0, mat, vis, rowvec, colvec);
            }

            if (mat[i][n - 1] == 'O' && !vis[i][n - 1])
            {
                dfs(i, n - 1, mat, vis, rowvec, colvec);
            }
        }

        for (int j = 0; j < n; j++)
        {
            if (mat[0][j] == 'O' && !vis[0][j])
            {
                dfs(0, j, mat, vis, rowvec, colvec);
            }

            if (mat[m - 1][j] == 'O' && !vis[m - 1][j])
            {
                dfs(m - 1, j, mat, vis, rowvec, colvec);
            }
        }

        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (mat[i][j] == 'O' && !vis[i][j])
                {
                    mat[i][j] = 'X';
                }
            }
        }

        return mat;
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
        vector<vector<char>> mat(n, vector<char>(m, '.'));
        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                cin >> mat[i][j];

        Solution ob;
        vector<vector<char>> ans = ob.fill(n, m, mat);
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << ans[i][j] << " ";
            }
            cout << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends