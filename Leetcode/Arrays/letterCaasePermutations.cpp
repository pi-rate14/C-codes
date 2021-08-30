#include<bits/stdc++.h>
using namespace::std;

class Solution {
public:

    void solve(string ip, string op, vector<string>& ans) {
        if (ip.length() == 0) {
            ans.push_back(op);
            return;
        }
        if (isalpha(ip[0])) {
            string op1 = op;
            string op2 = op;
            op1.push_back(toupper(ip[0]));
            op2.push_back(ip[0]);
            ip.erase(ip.begin() + 0);
            solve(ip, op1, ans);
            solve(ip, op2, ans);
        }
        else {
            string op1 = op;
            op1.push_back(ip[0]);
            ip.erase(ip.begin() + 0);
            solve(ip, op1, ans);
        }
    }

    vector<string> letterCasePermutation(string s) {
        for (char c : s) {
            c = tolower(c);
        }
        string ip = s;
        string op = "";
        vector<string> ans;
        solve(ip, op, ans);
        return ans;
    }
};