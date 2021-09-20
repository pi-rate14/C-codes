#include<bits/stdc++.h>
using namespace::std;
class Solution {
public:
    vector<string> ans;
    vector<string> arr{ "0","1","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz" };

    void recursiveCombinations(vector<string>& ans, vector<string>& arr, int index, string current, string digits) {
        if (index == digits.length()) {
            ans.push_back(current);
            return;
        }

        string letters = arr[digits[index] - '0']; //digits = "23"
        for (int i = 0; i < letters.length();i++) {
            recursiveCombinations(ans, arr, index + 1, current + letters[i], digits);
        }
    }

    vector<string> letterCombinations(string digits) {
        if (digits.length() == 0) {
            return {};
        }
        recursiveCombinations(ans, arr, 0, "", digits);
        return ans;
    }
};