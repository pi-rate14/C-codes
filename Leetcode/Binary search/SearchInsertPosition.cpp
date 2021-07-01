// Given a sorted array of distinct integers and a target value, return the index if the target is found. If not, return the //index where it would be if it were inserted in order.

// You must write an algorithm with O(log n) runtime complexity.
#include <bits/stdc++.h>
using namespace ::std;
class Solution
{
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int left = 0, right = nums.size() - 1, mid;
        while (right >= left)
        {
            mid = left + (right - left) / 2;
            if (target == nums[mid])
            {
                return mid;
            }
            if (target < nums[mid])
            {
                right = mid - 1;
            }
            if (target > nums[mid])
            {
                left = mid + 1;
            }
        }
        nums.push_back(target);
        sort(nums.begin(), nums.end());
        return searchInsert(nums, target);
    }
};