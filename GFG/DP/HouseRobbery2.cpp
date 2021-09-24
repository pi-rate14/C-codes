#include<bits/stdc++.h>
using namespace::std;
class Solution {
public:
    int findMax(vector<int> nums) {
        int n = nums.size();
        vector<int> dp(n);
        if (n >= 1) {
            dp[0] = nums[0];
        }
        if (n >= 2) {
            dp[1] = max(nums[0], nums[1]);
        }
        for (int i = 2;i < n;i++) {
            dp[i] = max(dp[i - 2] + nums[i], dp[i - 1]);
        }

        return(dp[n - 1]);
    }
    int rob(vector<int>& nums) {
        if (nums.size() == 0) {
            return 0;
        }
        if (nums.size() == 1) {
            return nums[0];
        }
        return max(findMax(vector<int>(nums.begin(), nums.end() - 1)), findMax(vector<int>(nums.begin() + 1, nums.end())));
    }
};