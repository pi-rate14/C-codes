#include<bits/stdc++.h>
using namespace::std;

class Solution {
public:

    int subsetDiff(vector<int>& nums, int sum) {
        int n = nums.size();
        sum = abs(sum);
        int dp[n + 1][sum + 1];
        for (int i = 0;i <= sum;i++) {
            dp[0][i] = 0;
        }
        for (int i = 0;i <= n;i++) {
            dp[i][0] = 1;
        }
        dp[0][0] = 1;
        for (int i = 1;i <= n;i++) {
            for (int j = 0; j <= sum; j++) {
                if (nums[i - 1] <= j) {
                    dp[i][j] = dp[i - 1][j] + dp[i - 1][j - nums[i - 1]];
                }
                else {
                    dp[i][j] = dp[i - 1][j];
                }
            }
        }

        return dp[n][sum];
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        int sum = 0;
        for (int i : nums) {
            sum += i;
        }
        if (target > sum) {
            return 0;
        }

        return  (target + sum) % 2 != 0 ? 0 : subsetDiff(nums, (sum + target) / 2);
    }
};