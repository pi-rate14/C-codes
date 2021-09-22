#include<bits/stdc++.h>
using namespace::std;
class Solution {
public:
    int dp[10005];
    int n;
    int rec(int i, vector<int>& arr)
    {
        if (i >= n - 1)
            return 0;
        if (dp[i] != -1)
            return dp[i];
        int ans = 10005;
        for (int j = 1;j <= arr[i];j++)
        {
            ans = min(ans, 1 + rec(i + j, arr));
        }
        return dp[i] = ans;

    }
    int jump(vector<int>& arr) {
        n = arr.size();
        for (int i = 0;i <= n;i++)
            dp[i] = -1;
        return rec(0, arr);
    }
};