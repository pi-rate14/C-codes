#include<bits/stdc++.h>
using namespace::std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> ans;
        sort(nums.begin(), nums.end());
        for (int i = 0;i < nums.size();) {
            int start = i + 1, end = nums.size() - 1;
            while (start < end) {
                if (nums[i] + nums[start] + nums[end] == 0) {
                    ans.push_back({ nums[i],nums[start],nums[end] });
                    start++;
                    end--;
                    while (start < end && nums[start] == nums[start - 1]) {
                        start++;
                    }
                    while (start < end && nums[end] == nums[end + 1]) {
                        end--;
                    }
                }
                else if (nums[i] + nums[start] + nums[end] < 0) {
                    start++;
                    while (start < end && nums[start] == nums[start - 1])
                        start++;
                }
                else {
                    end--;
                    while (start < end && nums[end] == nums[end + 1])
                        end--;
                }
            }

            i++;
            while (i < nums.size() && nums[i] == nums[i - 1])
                i++;

        }
        return ans;
    }
};