#include<bits/stdc++.h>
using namespace::std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        int hay = haystack.length();
        int nee = needle.length();
        if (nee == 0) {
            return 0;
        }
        if (hay < nee) {
            return -1;
        }
        int ctr = 0;
        for (int i = 0;i <= hay - nee;i++) {

            int j;
            for (j = 0;j < nee;j++) {
                if (needle[j] != haystack[i + j]) {
                    break;
                }
            }
            if (j == nee) {
                return i;
            }
        }
        return -1;
    }
};