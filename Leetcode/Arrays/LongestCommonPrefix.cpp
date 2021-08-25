#include<bits/stdc++.h>
using namespace::std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.size() == 0)
            return "";
        int length = strs[0].length();
        for (int i = 0;i < strs.size() - 1;i++) {
            if (strs[i].length() < length) {
                length = strs[i].length();
            }
            for (int j = 0; j < length; j++) {
                if (strs[0][j] != strs[i + 1][j]) {
                    length = j;
                    break;
                }
            }
        }
        return strs[0].substr(0, length);
    }
};