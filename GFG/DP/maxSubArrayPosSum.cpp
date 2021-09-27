#include<bits/stdc++.h>
using namespace ::std;
class Solution {
public:
    int getMaxLen(vector<int>& nums) {
        // -1 -2 -3 0 1 2 -2 -2 0 2 1 -3 -4 -5 -6  
        int pos_len = 0, neg_len = 0, max_len = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] == 0) {
                pos_len = 0;
                neg_len = 0;
            }
            else if (nums[i] > 0) {
                pos_len++;
                if (neg_len > 0)  neg_len++;
            }
            else {
                pos_len++;
                if (neg_len > 0)  neg_len++;

                swap(pos_len, neg_len);
            }

            max_len = max(max_len, pos_len);
        }

        return max_len;
    }
};