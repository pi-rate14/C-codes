#include<bits/stdc++.h>
using namespace::std;
class Solution {
public:
    int maxProduct(vector<int>& nums) {
        //find maxproduct and minproduct at every index
        int n = nums.size();
        int curmax = 1, curmin = 1;
        int res = nums[0];
        for (int i = 0;i < n;i++) {

            if (nums[i] == 0) {
                curmax = curmin = 1;
            }

            int temp = curmax;
            curmax = max(nums[i], max(nums[i] * curmax, nums[i] * curmin));
            curmin = min(nums[i], min(nums[i] * curmin, nums[i] * temp));
            res = max(res, max(curmax, curmin));
        }
        return res;
    }
};