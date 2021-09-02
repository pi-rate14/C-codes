#include <bits/stdc++.h>
using namespace::std;

class Solution {

public:
    int perfectSum(int arr[], int n, int sum)
    {
        int dp[n + 1][sum + 1];
        dp[0][0] = 1;
        for (int i = 1; i <= sum; i++)
            dp[0][i] = 0;
        for (int i = 1; i <= n; i++)
            dp[i][0] = 1;

        for (int i = 1;i <= n;i++) {
            for (int j = 1; j <= sum; j++) {
                if (arr[i - 1] <= j) {
                    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - arr[i - 1]];
                }
                else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }
        return dp[n][sum];
    }

};

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        Solution ob;
        cout << ob.perfectSum(a, n, sum) << "\n";
    }
    return 0;
}