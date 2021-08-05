#include <bits/stdc++.h>
using namespace ::std;
class Solution
{
public:
    int findCircleNum(vector<vector<int>> &C)
    {
        vector<bool> visited(C.size(), false);
        stack<int> dfs;
        int answer = 0;
        for (int i = 0; i < C.size(); i++)
        {
            if (!visited[i])
            {
                answer++;
                dfs.push(i);
                while (!dfs.empty())
                {
                    int current = dfs.top();
                    dfs.pop();
                    visited[current] = true;

                    for (int j = 0; j < C[current].size(); j++)
                    {
                        if (!visited[j] && C[current][j] == 1)
                        {
                            dfs.push(j);
                        }
                    }
                }
            }
        }

        return answer;
    }
};