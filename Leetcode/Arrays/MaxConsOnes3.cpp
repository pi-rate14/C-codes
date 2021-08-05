#include <bits/stdc++.h>
using namespace ::std;

int longestOnes(vector<int> &nums, int k)
{
    int zero = 0;
    int left = 0;
    int maxi = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] == 0)
        {
            zero++;
        }
        while (zero > k)
        {
            if (nums[left] == 0)
            {
                zero--;
            }
            left++;
        }
        maxi = max(maxi, i - left + 1);
    }
    return maxi;
}

int main()
{
    vector<int> nums{1, 1, 1, 0, 0, 0, 1, 1, 1, 1, 0};
    int k = 2;
    cout << longestOnes(nums, k);
    return 0;
}