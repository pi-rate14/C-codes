#include <bits/stdc++.h>
using namespace ::std;
int main()
{
    vector<int> nums{0, 1, 0, 3, 12};
    int zeroes = 0;
    vector<int> newV;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            newV.push_back(nums[i]);
        }
        else
        {
            zeroes++;
        }
    }
    for (int i = 0; i < zeroes; i++)
    {
        newV.push_back(0);
    }
    for (int i = 0; i < nums.size(); i++)
    {
        nums[i] = newV[i];
    }
    return 0;
}