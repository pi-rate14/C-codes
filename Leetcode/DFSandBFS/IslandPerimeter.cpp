#include<bits/stdc++.h>
using namespace::std;

class Solution {
public:
    vector<vector<int>> myGrid;
    vector<vector<bool>> seen;
    int rowSize;
    int colSize;

    int getPerimeter(int r, int c)
    {
        if (r < 0 || r >= rowSize || c < 0 || c >= colSize || seen[r][c] || myGrid[r][c] == 0)
        {
            return 0;
        }

        seen[r][c] = true;

        int p = 0;
        if (r == 0 || myGrid[r - 1][c] == 0)
            p++;
        if (r == rowSize - 1 || myGrid[r + 1][c] == 0)
            p++;
        if (c == 0 || myGrid[r][c - 1] == 0)
            p++;
        if (c == colSize - 1 || myGrid[r][c + 1] == 0)
            p++;

        return p + getPerimeter(r + 1, c)
            + getPerimeter(r - 1, c)
            + getPerimeter(r, c + 1)
            + getPerimeter(r, c - 1);
    }

    int islandPerimeter(vector<vector<int>>& grid) {

        myGrid = grid;
        rowSize = grid.size();
        colSize = grid[0].size();

        seen = vector<vector<bool>>(rowSize, vector<bool>(colSize, false));

        for (int r = 0; r < rowSize; r++)
        {
            for (int c = 0; c < colSize; c++)
            {
                if (myGrid[r][c] == 1)
                {
                    return getPerimeter(r, c);
                }
            }
        }
        return 0;
    }
};