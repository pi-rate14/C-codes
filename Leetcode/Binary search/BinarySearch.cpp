#include <bits/stdc++.h>
using namespace ::std;
class Solution
{
public:
    // int binarySearch(vector<int>& nums, int l, int r, int target){
    //     if(r>=l){
    //         int mid = l+(r-l)/2;
    //         if(nums[mid]==target)
    //             return mid;
    //         if(nums[mid]>target)
    //             return binarySearch(nums, l, mid-1,target);
    //         return binarySearch(nums,mid+1,r,target);
    //     }
    //     return -1;
    // }
    int search(vector<int> &nums, int target)
    {
        int right = nums.size() - 1;
        int left = 0;
        while (right >= left)
        {
            int mid = left + (right - left) / 2;
            if (target == nums[mid])
                return mid;
            if (target > nums[mid])
            {
                left = mid + 1;
            }
            if (target < nums[mid])
            {
                right = mid - 1;
            }
        }
        return -1;
    }
};