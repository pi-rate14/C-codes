#include<bits/stdc++.h>
using namespace::std;

class Solution {
public:
    
    bool isValid(int row, int col, vector<vector<char>>& grid, vector<vector<int>>& vis){
        return (row >= 0 && row < grid.size() && col >= 0 && col <= grid[0].size() && grid[row][col] == '1' && !vis[row][col]);
    }
    
    void bfs(int i, int j, vector<vector<char>>& grid,  vector<vector<int>>& vis){
        
        vis[i][j] = 1;
        int m = grid.size();
        int n = grid[0].size();
        queue<pair<int,int>> q;
        q.push({i, j});
        while(!q.empty()) {
            
            int row = q.front().first;
            int col = q.front().second;
            
            q.pop();
            
            // traverse neighbors
            for(int delrow = -1; delrow <= 1; delrow++){
                for(int delcol = -1; delcol <= 1; delcol++){
                    int nrow = row + delrow;
                    int ncol = col + delcol;
                    if(isValid(nrow, ncol, grid, vis)){
                        vis[nrow][ncol] = 1;
                        q.push({nrow, ncol});
                    }
                }
            }
        }
        
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        
        vector<vector<int>> vis(m, vector<int>(n, 0));
        
//         traverse the grid to look for land
        
        int ans = 0;
        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++){
                if(grid[i][j] == '1' && !vis[i][j]) {
                    ans++;
                    bfs(i, j, grid, vis);
                }
            }
        }
        return ans;
        
    }
};