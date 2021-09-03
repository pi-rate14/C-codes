// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {

public:
    void minDifference(int arr[], int n) {
        // Your `code goes here
        int sum = 0;
        for (int i = 0;i < n;i++) {
            cout << "arr[i]: " << arr[i] << "\n";
            sum += arr[i];
        }

        cout << "sum: " << sum << "\n";
        int dp[n + 1][sum + 1];

        for (int i = 0;i <= sum;i++) {
            dp[0][i] = false;
        }

        for (int i = 0;i <= n;i++) {
            dp[i][0] = true;
        }

        for (int i = 1;i <= n;i++) {
            for (int j = 1; j <= sum; j++) {
                if (j <= arr[i - 1]) {
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - arr[i - 1]];
                }
                else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        vector<int> ansRow;
        for (int i = 0;i <= sum / 2;i++) {
            if (dp[n][i] == true) {
                ansRow.push_back(i);
            }
        }
        int mn = INT_MAX;
        for (int i = 0;i < ansRow.size();i++) {
            mn = min(mn, sum - 2 * ansRow[i]);
        }

        cout << mn;
    }
};


// { Driver Code Starts.
int main()
{


    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];



        Solution ob;
        ob.minDifference(a, n);
        //cout << ob.minDifference(a, n) << "\n";

    }
    return 0;
}  // } Driver Code Ends