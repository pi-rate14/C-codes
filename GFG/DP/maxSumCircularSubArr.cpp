#include<bits/stdc++.h>
using namespace::std;
class Solution {
public:
    int kadane(vector<int>& nums) {
        int sum = 0;
        int maxSum = INT_MIN;
        int n = nums.size();
        for (int i = 0;i < n;i++) {
            if (sum < 0) {
                sum = 0;
            }
            sum += nums[i];
            maxSum = max(sum, maxSum);
        }
        return maxSum;
    }
    int maxSubarraySumCircular(vector<int>& nums) {
        int maxSum = kadane(nums);
        int arrSum = 0;
        int n = nums.size();
        for (int i = 0;i < n;i++) {
            arrSum += nums[i];
            nums[i] *= -1;
        }
        int newSum = kadane(nums);
        if (newSum + arrSum == 0) {
            return maxSum;
        }
        return max(maxSum, newSum + arrSum);
    }
};