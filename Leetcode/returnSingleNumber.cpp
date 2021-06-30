// Given a non-empty array of integers nums, every element appears twice except for one. Find that single one.

// You must implement a solution with a linear runtime complexity and use only constant extra space.

#include <bits/stdc++.h>
using namespace ::std;
int main()
{
    vector<int> nums{4, 1, 2, 1, 2};

    //1st method

    // sort(nums.begin(), nums.end());
    // for (auto i = nums.begin(); i != nums.end(); ++i)
    //     cout << *i << " ";
    // vector<int> st;
    // st.push_back(nums[0]);
    // for (int i = 1; i < nums.size(); i++)
    // {
    //     if (st.front() == nums[i])
    //     {
    //         st.pop_back();
    //     }
    //     else
    //     {
    //         st.push_back(nums[i]);
    //     }
    // }
    // int result = st.front();
    // cout << endl
    //      << result;

    //2nd methdod

    // unordered_map<int, int> map;
    // for (int n : nums)
    // {
    //     map[n]++;
    // }
    // for (auto n: map){
    //     if(n.second == 1){
    //         return n.first;
    //     }
    // }

    //3rd method
    int num = nums[0];
    for (int i = 0; i < nums.size(); i++)
    {
        num = num ^ nums[i];
    }
    cout << num;
    return 0;
}