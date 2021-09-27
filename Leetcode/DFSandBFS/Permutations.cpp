#include<bits/stdc++.h>
using namespace::std;

class Solution {
public:
    vector<vector<int>> ans;
    void dfs(vector<int>& curr, vector<int>& nums, vector<bool>& visited) {
        if (curr.size() == nums.size()) {
            ans.push_back(curr);
        }

        for (int i = 0;i < nums.size();i++) {
            if (visited[i]) {
                continue;
            }

            visited[i] = 1;
            curr.push_back(nums[i]);
            dfs(curr, nums, visited);
            curr.pop_back();
            visited[i] = 0;
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> curr;
        vector<bool> visited(nums.size(), 0);
        dfs(curr, nums, visited);
        return ans;
    }
};