// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {

public:
    void minCoins(int coins[], int n, int sum)
    {
        // Your code goes here
        int dp[n + 1][sum + 1];
        for (int i = 0;i <= sum;i++) {
            dp[0][i] = INT_MAX - 1;
        }
        for (int i = 0;i <= n;i++) {
            dp[i][0] = 0;
        }
        dp[0][0] = INT_MAX - 1;
        for (int i = 1;i <= n;i++) {
            for (int j = 1; j <= sum; j++) {
                if (coins[i - 1] <= j) {
                    dp[i][j] = min(1 + dp[i][j - coins[i - 1]], dp[i - 1][j]);
                }
                else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        int ans = 0;

        for (int i = 0;i <= n;i++) {
            for (int j = 0; j <= sum; j++) {
                cout << dp[i][j] << " ";
            }
            cout << "\n";
        }


        cout << "\n\n" << dp[n][sum];
    }

};

// { Driver Code Starts.
int main()
{


    int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for (int i = 0; i < m; i++)
            cin >> coins[i];


        Solution ob;
        //cout << ob.minCoins(coins, m, v) << "\n";
        ob.minCoins(coins, m, v);

    }
    return 0;
}
// } Driver Code Ends